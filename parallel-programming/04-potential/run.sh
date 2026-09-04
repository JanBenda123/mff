#!/bin/bash
#SBATCH --partition=mpi-homo-short      # partition you want to run job in
#SBATCH -n 1  # one job
#SBATCH -c 32  # cores
#SBATCH --output=run.log # stdout and stderr output file

#SBATCH -A nprg042s
#SBATCH --job-name="levenshtein-run"




~/03-levenshtein/serial/levenshtein_serial "$1.A" "$1.B" 
~/03-levenshtein/framework/levenshtein "$1.A" "$1.B" 