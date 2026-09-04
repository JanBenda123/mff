#!/bin/bash

ACCOUNT=nprg42s
RADIUS=5
FILE=lenna
#FILE=gigachad

SARGS="-p gpu-short -A $ACCOUNT --gpus=V100:1"  # optionally use -w to specify the worker

srun $SARGS make

echo
echo ">>> Running serial blur ..."
srun $SARGS ./blur serial $RADIUS ../data/$FILE.pbm ./$FILE-serial-$RADIUS.pbm

echo
echo ">>> Running SYCL blur ..."
srun $SARGS ./blur sycl $RADIUS ../data/$FILE.pbm ./$FILE-sycl-$RADIUS.pbm

echo
diff ./$FILE-sycl-$RADIUS.pbm ./$FILE-serial-$RADIUS.pbm
if [[ $? != 0 ]]; then
	echo "Diff check FAILED!"
else
	echo "Diff check OK."
fi
