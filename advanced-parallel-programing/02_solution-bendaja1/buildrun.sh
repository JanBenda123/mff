#!/bin/bash
# build and remote run on parlab

gpulab() {
    local cmd="srun -A nprg058s -p gpu-short-teach --gpus=V100:1 $*"
    ssh -t gpulab "cd $TARGET_FOLDER ; bash -l -c \"$cmd\""
    echo
}

gpulab_test() {
    local cmd="srun -A nprg058s -p gpu-short-teach --gpus=V100:1 $*"
    ssh -t gpulab "cd $TARGET_FOLDER ; bash -l -c \"$cmd\"" 2>/dev/null| grep -E "Execution|OK|FAILED|Preparations"
    echo
}

echo "Change the target folder in this script before use"

readonly TARGET_FOLDER="/home/bendaja1/advpara/02-hist"
readonly DATA_FOLDER="/home/_teaching/advpara/ha2-cuda-histogram/data"

scp -rq ./headers ./kernels ./histogram.cpp Makefile gpulab:$TARGET_FOLDER/

gpulab rm $TARGET_FOLDER/histogram
gpulab make


ARGS_SCRIPT="--verify --privCopies 8 --blockSize 512  --itemsPerThread 32 --chunkSize 1073741824 --repeatInput 32k"
echo "serial"
gpulab_test ./histogram --algorithm serial $ARGS_SCRIPT $DATA_FOLDER/lorem_small.txt
echo "naive"
gpulab_test ./histogram --algorithm naive $ARGS_SCRIPT $DATA_FOLDER/lorem_small.txt
echo "atomic"
gpulab_test ./histogram --algorithm atomic $ARGS_SCRIPT $DATA_FOLDER/lorem_small.txt
echo "atomic_shm x2"
gpulab_test ./histogram --algorithm atomic_shm $ARGS_SCRIPT $DATA_FOLDER/lorem_small.txt
gpulab_test ./histogram --algorithm atomic_shm --privCopies 1 --blockSize 256  --itemsPerThread 16 $ARGS_SCRIPT $DATA_FOLDER/lorem_small.txt
echo "overlap x2"
gpulab_test ./histogram --algorithm overlap $ARGS_SCRIPT $DATA_FOLDER/lorem_small.txt
gpulab_test ./histogram --algorithm overlap --pinned $ARGS_SCRIPT $DATA_FOLDER/lorem_small.txt
echo "final"
gpulab_test ./histogram --algorithm final $ARGS_SCRIPT $DATA_FOLDER/lorem_small.txt


# Available files:
#   1.0K abcd.txt
#   1.0K a.txt
#   1.0K hex.txt
#    64K lorem_small.txt
#   256M lorem.txt

# Named arguments:
#   algorithm - Which algorithm is to be tested.
#   blockSize - CUDA block size (threads in a block).
#   fromValue - Ordinal value of the first character in histogram.
#   itemsPerThread - How many items are processed by one thread.
#   privCopies - Number of privatized copies.
#   repeatInput - Enlarge data input by loading input file multiple times.
#   save - Path to a file to which the histogram is saved
#   toValue - Ordinal value of the last character in histogram.
#   verify - Results will be automatically verified using serial algorithm as baseline.


