#!/bin/bash

#SBATCH -N 2
#SBATCH --time=0:30:00
#SBATCH --ntasks-per-node=2
#SBATCH --cpus-per-task=32
#SBATCH -p mpi-homo-short
#SBATCH --mem=102G
#SBATCH --output="spark-slurm-%A.stdout"
#SBATCH --error="spark-slurm-%A.stderr"
#SBATCH --exclude=w201

# TODO description

set -e

if [[ -z $SLURM_JOB_ID ]]; then
    echo "The script is not running under Slurm! Use sbatch to run this script." 1>&2
    exit 1
fi

SPARK_ROOT=/home/_teaching/para/spark
DEV=eno1

export PYTHONIOENCODING=utf8

# Get the IP and URL of the master from the given DEV
MASTER_IP=`ip -o -f inet addr show dev "$DEV" | sed -r 's/^.+inet ([0-9.]+).+/\1/'`
MASTER_URL=spark://${MASTER_IP}:7077
if [[ -n $MASTER_IP ]]; then
    echo "Spark master: $SLURMD_NODENAME ($MASTER_IP)" 1>&2
else
    echo "no IP address for $DEV found" 1>&2
    exit 1
fi

# Prepare working (conf & log) directory ...
WORK_DIR="./slurm-${SLURM_JOB_ID}.spark"
mkdir "$WORK_DIR"
chmod 700 "$WORK_DIR"
export SPARK_CONF_DIR="$WORK_DIR"  # this is the directory where spark-env.sh and spark-defaults.conf are looked up
LOG_DIR="$WORK_DIR/log"

# Environment initialization for Spark cluster
cat <<EOF > "$WORK_DIR/spark-env.sh"
SPARK_LOCAL_DIRS=$TMPDIR
SPARK_LOG_DIR="$LOG_DIR"
SPARK_WORKER_DIR=$TMPDIR
SPARK_LOCAL_IP=\$( ip -o -f inet addr show dev "$DEV" | sed -r 's/^.+inet ([0-9.]+).+/\1/')
SPARK_MASTER_HOST=$MASTER_IP
EOF

# Configuration for the Spark cluster
MY_SECRET=`cat /dev/urandom | tr -dc '0-9a-f' | head -c 48`
cat <<EOF > "$WORK_DIR/spark-defaults.conf"
spark.authenticate true
spark.authenticate.secret $MY_SECRET
EOF
chmod 600 "$WORK_DIR/spark-defaults.conf"


# Start the master
echo "Starting master..." 1>&2
$SPARK_ROOT/sbin/start-master.sh 1>&2

for ((i=0;i<10;++i)); do
	sleep 1
	MASTER_STATE=`grep -F 'New state: ALIVE' "$LOG_DIR"/*master*.out`
	if [[ ! -z "$MASTER_STATE" ]]; then
		break
	fi
done

if [[ -z "$MASTER_STATE" ]]; then
	tail -10 "$LOG_DIR"/*master*.out 1>&2
	echo "Master is not alive after 10s, terminating!" 1>&2
	exit 2
fi


# Start the Spark workers
echo "Starting workers..." 1>&2
export SPARK_NO_DAEMONIZE=true
srun --mem=101G sh -c "echo \"Starting worker on \$SLURMD_NODENAME (\$( ip -o -f inet addr show dev "$DEV" | sed -r 's/^.+inet ([0-9.]+).+/\1/'))...\" && \
    $SPARK_ROOT/sbin/start-worker.sh $MASTER_URL" 1>&2 &

for ((i=0;i<30;++i)); do
	sleep 1
	RUNNING_WORKERS=`grep -F "INFO Master: Registering worker" "$LOG_DIR"/*master*.out | wc -l`
	if [[ $RUNNING_WORKERS -ge $SLURM_NTASKS ]]; then
		break
	fi
done

if [[ $RUNNING_WORKERS -lt $SLURM_NTASKS ]]; then
	tail -10 "$LOG_DIR"/*master*.out 1>&2
	echo "Only $RUNNING_WORKERS workers are running out of $SLURM_NTASKS after 30s, terminating!" 1>&2
	exit 3
fi

# Finally, let's submit the given script as a job to Spark...
echo -n "Start: " >> $WORK_DIR/time.log
date >> $WORK_DIR/time.log
START_TIME=`date '+%s%N'`
$SPARK_ROOT/bin/spark-submit --master "$MASTER_URL" --executor-memory=50G --executor-cores=32 $@
END_TIME=`date '+%s%N'`
echo -n "End: " >> $WORK_DIR/time.log
date >> $WORK_DIR/time.log
MEASURED_MS=$(( ($END_TIME-$START_TIME) / 1000000 ))

echo "Spark job took $MEASURED_MS ms"

# Let SLURM kill Spark cluster
