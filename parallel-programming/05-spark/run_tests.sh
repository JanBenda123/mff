#!/bin/bash
TARGET_FOLDER="/home/bendaja1/05-spark"

DATA_FOLDER="/home/_teaching/para/05-spark/data"

PROGRAM_VERSION="count_duplicities_df.py"
ARGS="-p mpi-homo-short --mem=50G -c 4 --exclude=w201 /home/_teaching/para/spark/bin/spark-submit  --master local[*] $TARGET_FOLDER/$PROGRAM_VERSION"


scp -r ./* parlab:~/05-spark
#ssh -t parlab "cd $TARGET_FOLDER/ ; rm -rf output_tmp; find . -name '*.std*' | xargs -d'\n' rm  ; find . -name 'slurm*' | xargs -d'\n' rm -r "
#ssh -t parlab "cd $TARGET_FOLDER/ ; bash -l -c 'sbatch /home/_teaching/para/05-spark/spark-slurm.sh ./count_duplicities_RDD.py $DATA_FOLDER/large.csv'"

ssh -t parlab "cd $TARGET_FOLDER/ ; bash -l -c 'srun $ARGS $DATA_FOLDER/debug/tiny.csv'" 
DIFF=$(ssh -t parlab "diff ./para/05-spark/data/debug/tiny.output.csv $TARGET_FOLDER/output.csv")
if [ "$DIFF" != "" ]; then
    echo "Tiny failed"
    exit 1
fi
echo "Tiny good"

ssh -t parlab "cd $TARGET_FOLDER/ ; bash -l -c 'srun $ARGS $DATA_FOLDER/debug/small.csv'" 
DIFF=$(ssh -t parlab "diff ./para/05-spark/data/debug/small.output.csv $TARGET_FOLDER/output.csv")
if [ "$DIFF" != "" ]; then
    echo "Small failed"
    exit 1
fi
echo "Small good"

