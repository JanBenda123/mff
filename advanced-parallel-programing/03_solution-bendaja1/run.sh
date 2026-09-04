#!/bin/bash
# Compiles, runs and measures the MPI matrix mutliplication program

parlab_once() {
    local cmd="srun -p mpi-homo-short -A nprg058s -n 1 -c 1 $*"
    ssh -t parlab "cd $TARGET_FOLDER ; bash -l -c \"$cmd\""
    echo
}

parlab() {
    local cmd="./time srun -A nprg058s -p mpi-homo-short -n 256 -N 8 -m cyclic -c 2 --mem-per-cpu=1G $*"
    ssh -t parlab "cd $TARGET_FOLDER ; bash -l -c \"$cmd\""
    echo
}

echo "Don't forget to change the target folder!"

readonly TARGET_FOLDER="/home/bendaja1/advpara/03-matmul"
readonly DATA_FOLDER="/home/_teaching/advpara/ha3-mpi-matmul/data"
readonly LMATRIX="$DATA_FOLDER/lmatrix.a $DATA_FOLDER/lmatrix.b $TARGET_FOLDER/lres.r"
readonly HMATRIX="$DATA_FOLDER/hmatrix.a $DATA_FOLDER/hmatrix.b $TARGET_FOLDER/hres.r"



scp -rq ./comparator.cpp ./multiply.cpp Makefile time parlab:$TARGET_FOLDER/



parlab_once make multiply
parlab_once make comparator

echo "Multiplying LMAT"
parlab ./multiply $LMATRIX
parlab_once ./comparator ./lres.r $DATA_FOLDER/lmatrix.r

echo "Multiplying HMAT"
parlab ./multiply $HMATRIX
parlab_once ./comparator ./hres.r $DATA_FOLDER/hmatrix.r

ssh parlab rm -f $TARGET_FOLDER/lres.r $TARGET_FOLDER/hres.r

parlab_once make clear




# Data available
# 4.1G hmatrix.a
# 4.1G hmatrix.b
# 4.1M hmatrix.r
# 2.1G lmatrix.a
# 2.1G lmatrix.b
# 1.1G lmatrix.r

