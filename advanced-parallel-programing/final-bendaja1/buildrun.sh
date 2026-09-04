#!/bin/bash
# build and remote run on parlab


readonly DATA_FOLDER="/home/_teaching/advpara/final-kmedoids/data"

srun -A nprg058s -p gpu-short-teach --gpus=V100:1 make -C ./parallel parallel
chmod 755 parallel/parallel
srun -A nprg058s -p gpu-short-teach --ntasks-per-gpu=1 --gpus=V100:10 parallel/parallel $DATA_FOLDER/aloi.bsf





