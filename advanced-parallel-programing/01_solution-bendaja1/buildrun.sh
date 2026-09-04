#!/bin/bash
# build and remote run on parlab


readonly TARGET_FOLDER="/home/bendaja1/advpara/01-stack"
rm -f ./run.log

scp -rq ./* parlab:$TARGET_FOLDER/
ssh -t parlab "cd $TARGET_FOLDER ; bash -l -c 'srun -p mpi-homo-short -A nprg058s -n 1 -c 1 make'"
ssh -t parlab "cd $TARGET_FOLDER ; bash -l -c 'time srun -p mpi-homo-short -A nprg058s -n 1 -c 64 ./ha1main 64 200000'"
#ssh -t parlab "cd $TARGET_FOLDER ; bash -l -c 'time srun -p mpi-homo-short -A nprg058s -n 1 -c 32 ./ha1main 32 5000000'" >> ./run.log
