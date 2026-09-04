#!/bin/bash
# build and remote run on parlab

gpulab_once() {
    local cmd="srun -A nprg058s -p gpu-short-teach --gpus=V100:1 $*"
    ssh -t gpulab "cd $TARGET_FOLDER/parallel ; bash -l -c \"$cmd\""
    echo
}

gpulab() {
    local cmd="srun -A nprg058s -p gpu-short-teach --gpus=V100:10 --ntasks-per-gpu=1 $*"
    ssh -t gpulab "cd $TARGET_FOLDER/parallel ; bash -l -c \"$cmd\""
    echo
}


echo "Change the target folder in this script before use"

readonly TARGET_FOLDER="/home/bendaja1/advpara/final"
readonly DATA_FOLDER="/home/_teaching/advpara/final-kmedoids/data"

scp -rq ./buildrun.sh ./parallel ./shared gpulab:$TARGET_FOLDER/

#gpulab rm $TARGET_FOLDER/histogram
gpulab_once make
 gpulab ./parallel $DATA_FOLDER/aloi.bsf



