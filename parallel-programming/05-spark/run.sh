#!/bin/bash
TARGET_FOLDER="/home/bendaja1/05-spark"

DATA_FOLDER="/home/_teaching/para/05-spark/data"

PROGRAM_VERSION="count_duplicities_df.py"
ARGS="-p mpi-homo-short --mem=50G -c 4 --exclude=w201 /home/_teaching/para/spark/bin/spark-submit  --master local[*] $TARGET_FOLDER/$PROGRAM_VERSION"


scp -r ./* parlab:~/05-spark
ssh -t parlab "cd $TARGET_FOLDER/ ; find . -name '*.std*' | xargs -d'\n' rm  ; find . -name 'slurm*' | xargs -d'\n' rm -r "
ssh -t parlab "cd $TARGET_FOLDER/ ; bash -l -c 'sbatch $TARGET_FOLDER/spark-slurm.sh $TARGET_FOLDER/$PROGRAM_VERSION $DATA_FOLDER/large.csv'"

