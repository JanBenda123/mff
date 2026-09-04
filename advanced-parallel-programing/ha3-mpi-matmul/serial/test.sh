#!/bin/bash

## #SBATCH --mail-user=yaghob@ksi.mff.cuni.cz
## #SBATCH --mail-type=ALL

#SBATCH -n 1 -N 1 -c 2 -p mpi-homo-long -A nprg058t --exclusive

ADVPARA_MPI_PATH="/home/_teaching/advpara/mpi-matrixmul"
TIME_BIN="${ADVPARA_MPI_PATH}/exec/time"
SERIAL_BIN="${ADVPARA_MPI_PATH}/serial/serial-mulmatrix"

for mtx in hmatrix lmatrix; do

    afile="${ADVPARA_MPI_PATH}/data/$mtx.a"
    bfile="${ADVPARA_MPI_PATH}/data/$mtx.b"
    rfile="${TMPDIR}/$mtx.r"

    echo $mtx
    ${TIME_BIN} -f "%e" ${SERIAL_BIN} ${afile} ${bfile} ${rfile}

done
