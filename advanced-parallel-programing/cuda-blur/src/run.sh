#!/bin/bash

# Feel free to use only parts of this file for testing...


RADIUS=5
PARTITION=gpu-short-teach
ACCOUNT='nprg058s'
WORKER=volta01
if [ -z "$ACCOUNT" ]; then
	echo "You need to set ACCOUNT variable in the script!"
	exit 1
fi

echo "----------"
echo "Compiling..."
srun -p $PARTITION -A $ACCOUNT --gpus=1 -w $WORKER make

echo "----------"
echo "Running serial version..."
srun -p $PARTITION -A $ACCOUNT --gpus=1 -w $WORKER ./cuda-blur-stencil serial $RADIUS ../data/lenna.pbm ../data/result-serial.pbm

echo "----------"
echo "Running CUDA version..."
srun -p $PARTITION -A $ACCOUNT --gpus=1 -w $WORKER ./cuda-blur-stencil cuda $RADIUS ../data/lenna.pbm ../data/result-cuda.pbm

echo "----------"
echo "Comaring results..."
if diff ../data/result-serial.pbm ../data/result-cuda.pbm; then
	echo "OK"
fi
