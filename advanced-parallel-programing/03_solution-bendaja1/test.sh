#!/bin/bash
# Compiles, runs and measures the MPI matrix mutliplication program

parlab_once() {
    local cmd="srun -A nprg058s -p mpi-homo-short -n 1 -N 1 -m cyclic -c 1 --mem-per-cpu=1G $*"
    ssh -t parlab "cd $TARGET_FOLDER ; bash -l -c \"$cmd\""
    echo
}

parlab() {
    local cmd="srun -A nprg058s -p mpi-homo-short -n 256 -N 8 -m cyclic -c 2 --mem-per-cpu=1G $*"
    ssh -t parlab "cd $TARGET_FOLDER ; bash -l -c \"$cmd\""
    echo
}

echo "Don't forget to change the target folder!"

readonly TARGET_FOLDER="/home/bendaja1/advpara/03-matmul"
readonly DATA_FOLDER="/home/_teaching/advpara/ha3-mpi-matmul/data"
readonly LMATRIX="$DATA_FOLDER/lmatrix.a $DATA_FOLDER/lmatrix.b $TARGET_FOLDER/lres.r"
readonly HMATRIX="$DATA_FOLDER/hmatrix.a $DATA_FOLDER/hmatrix.b $TARGET_FOLDER/hres.r"
readonly TMATRIX="$TARGET_FOLDER/t.a $TARGET_FOLDER/t.b $TARGET_FOLDER/t.r"
readonly SEED="https://xkcd.com/1210/"


scp -rq ./comparator.cpp ./generator.cpp ./multiply.cpp ./serial_multiply.cpp Makefile time parlab:$TARGET_FOLDER/



parlab_once make

parlab_once ./generator 5120 2147 $SEED ./t.a
parlab_once ./generator 2147 5120 $SEED ./t.b

echo "Serial multiply"
parlab_once make serial_multiply 
parlab_once ./serial_multiply ./t.a ./t.b ./t_ser.r

echo "Parallel multiply"
parlab ./multiply ./t.a ./t.b ./t.r

echo "Compare matrices"
parlab_once ./comparator ./t_ser.r ./t.r 

# ssh -t parlab "cd $TARGET_FOLDER ; rm -f ./t_ser.r ./t.r ./t.a ./t.b ./t_ser.r"

parlab_once make clear




# Data available
# 4.1G hmatrix.a
# 4.1G hmatrix.b
# 4.1M hmatrix.r
# 2.1G lmatrix.a
# 2.1G lmatrix.b
# 1.1G lmatrix.r

