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




readonly TARGET_FOLDER="/home/bendaja1/advpara/02-hist"
readonly DATA_FOLDER="/home/_teaching/advpara/ha2-cuda-histogram/data"

scp -rq ./headers ./kernels ./histogram.cpp Makefile gpulab:$TARGET_FOLDER/

gpulab rm $TARGET_FOLDER/histogram
gpulab make



# ARGS_SCRIPT="--algorithm final --privCopies 8 --blockSize 52  --itemsPerThread 32 --pinned --chunkSize 524288"
# gpulab ./histogram --verify $ARGS_SCRIPT $DATA_FOLDER/a.txt
# gpulab ./histogram --verify $ARGS_SCRIPT $DATA_FOLDER/abcd.txt
# gpulab ./histogram --verify $ARGS_SCRIPT $DATA_FOLDER/hex.txt
# gpulab ./histogram --verify $ARGS_SCRIPT $DATA_FOLDER/lorem_small.txt




ARGS_SCRIPT="--algorithm final --privCopies 8 --blockSize 512 --itemsPerThread 32 --repeatInput 32k"
gpulab_test ./histogram --verify $ARGS_SCRIPT $DATA_FOLDER/lorem_small.txt
# gpulab_test ./histogram --verify $ARGS_SCRIPT $DATA_FOLDER/lorem_small.txt
# gpulab_test ./histogram --verify $ARGS_SCRIPT $DATA_FOLDER/lorem_small.txt
# gpulab_test ./histogram --verify $ARGS_SCRIPT $DATA_FOLDER/lorem_small.txt
# gpulab_test ./histogram --verify $ARGS_SCRIPT $DATA_FOLDER/lorem_small.txt

# gpulab cat $TARGET_FOLDER/out.txt

# for pc in 1 8 32; do
#     for ipt in 1 4 16 32 64 256; do
#         for bs in 128 256 512 1024; do
#             ARGS_SCRIPT="--algorithm final --blockSize $bs --privCopies $pc --itemsPerThread $ipt --repeatInput 32k "
#             echo "Private copies: $pc, ItemsPerThread: $ipt, BlockSize $bs"
#             gpulab_test ./histogram --verify $ARGS_SCRIPT $DATA_FOLDER/lorem_small.txt
#         done
#     done
# done


#1k 8k 64k 512k

# for cs in 1073741824 524288 4194304 33554432 268435456 ; do
#     echo "ChunkSize: $cs"
#     ARGS_SCRIPT="--algorithm overlap --chunkSize $cs "
#     gpulab_test ./histogram --verify --blockSize 512 --privCopies 8 --itemsPerThread 32 --repeatInput 32k $ARGS_SCRIPT $DATA_FOLDER/lorem_small.txt
#     gpulab_test ./histogram  --blockSize 512 --privCopies 8 --itemsPerThread 32 --repeatInput 512k $ARGS_SCRIPT $DATA_FOLDER/abcd.txt 1> /dev/null
#     echo "ChunkSize: $cs, Pinned "
#     gpulab_test ./histogram --verify --blockSize 512 --privCopies 8 --pinned --itemsPerThread 32 --repeatInput 32k $ARGS_SCRIPT $DATA_FOLDER/lorem_small.txt
#     gpulab_test ./histogram  --blockSize 512 --privCopies 8 --itemsPerThread 32 --repeatInput 512k $ARGS_SCRIPT $DATA_FOLDER/abcd.txt 1> /dev/null
# done






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


