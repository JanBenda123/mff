#!/bin/bash
# build and remote run on gpulab

readonly TARGET_FOLDER="/home/bendaja1/04-potential"
ACCOUNT=nprg42s

scp -rq ./* gpulab:$TARGET_FOLDER/

ssh -t gpulab "cd $TARGET_FOLDER/ ; bash -l -c 'srun -p gpu-short -A $ACCOUNT --gpus=V100:1 -w volta01 $TARGET_FOLDER/build.sh'"


ssh -t gpulab "cd $TARGET_FOLDER/ ; bash -l -c 'srun -p gpu-short -A $ACCOUNT --gpus=V100:1 -w volta01 ./src/potential  ./data/debug-v4k-e8k.gbf'"

ssh gpulab "cat $TARGET_FOLDER/run.log "
# ssh gpulab 'echo "scale=1; $(sed -n "1p;3p" ~/03-levenshtein/run.log | paste -s -d/ -)" | bc'
# ssh gpulab 'echo "scale=1; $(sed -n "1p;3p" ~/03-levenshtein/run.log | paste -s -d/ -)" | bc >> ~/03-levenshtein/speedups.log'

# ssh -t gpulab "cd $TARGET_FOLDER ; rm -f $TARGET_FOLDER/run.log  ; bash -l -c 'sbatch $TARGET_FOLDER/run.sh $TARGET_FOLDER/data/02-64k'"
# sleep 16
# ssh gpulab "cat $TARGET_FOLDER/run.log "
# ssh gpulab 'echo "scale=1; $(sed -n "1p;3p" ~/03-levenshtein/run.log | paste -s -d/ -)" | bc'
# ssh gpulab 'echo "scale=1; $(sed -n "1p;3p" ~/03-levenshtein/run.log | paste -s -d/ -)" | bc >> ~/03-levenshtein/speedups.log'

# ssh -t gpulab "cd $TARGET_FOLDER ; rm -f $TARGET_FOLDER/run.log  ; bash -l -c 'sbatch $TARGET_FOLDER/run.sh $TARGET_FOLDER/data/03-128k'"
# sleep 64
# ssh gpulab "cat $TARGET_FOLDER/run.log "
# ssh gpulab 'echo "scale=1; $(sed -n "1p;3p" ~/03-levenshtein/run.log | paste -s -d/ -)" | bc'
# ssh gpulab 'echo "scale=1; $(sed -n "1p;3p" ~/03-levenshtein/run.log | paste -s -d/ -)" | bc >> ~/03-levenshtein/speedups.log'






# echo "\n Total speedup:"
# ssh gpulab "awk '{ if (\$1 != 0) { sum += 1/\$1; n++ } } END { if (n > 0) printf \"%.6f\n\", n/sum }' ~/03-levenshtein/speedups.log"
