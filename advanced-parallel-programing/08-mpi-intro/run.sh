#!/bin/bash

HOSTS=1
PROCS=2
srun -p mpi-homo-short -N $HOSTS -n $PROCS -c 1 ./mpi_test
