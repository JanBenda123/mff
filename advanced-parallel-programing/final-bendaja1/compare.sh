#!/bin/bash
# build and remote run on parlab

gpulab_once() {
    local cmd="srun -A nprg058s -p gpu-short-teach --gpus=V100:1 $*"
    ssh -t gpulab "cd $TARGET_FOLDER ; bash -l -c \"$cmd\""
    echo
}

gpulab() {
    local cmd="srun -A nprg058s -p gpu-short-teach --gpus=V100:10 $*"
    ssh -t gpulab "cd $TARGET_FOLDER ; bash -l -c \"$cmd\""
    echo
}


echo "Change the target folder in this script before use"

readonly TARGET_FOLDER="/home/bendaja1/advpara/final"
readonly DATA_FOLDER="/home/_teaching/advpara/final-kmedoids/data"

scp -rq ./parallel ./serial ./shared gpulab:$TARGET_FOLDER/



readonly ARGS="--iterations 1 $DATA_FOLDER/aloi_crop.bsf"
gpulab_once  make -C ./serial serial
gpulab_once make -C ./parallel parallel
gpulab ./parallel/parallel $ARGS
gpulab_once " ./serial/serial $ARGS"


