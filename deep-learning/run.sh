#!/bin/bash

dos2unix $1
name=$(basename "$1")
scp $1 aic:~/sol/$name
# ssh -t aic "srun -p gpu -c2 -G 2 --mem=32G ~/deep_learning_venv/bin/python3 -u ~/sol/$name"
ssh -t aic "srun -p gpu -c2 -G 2 --mem=32G --pty bash -c 'export TERM=xterm-256color; ~/deep_learning_venv/bin/python3 -u ~/sol/$name'"