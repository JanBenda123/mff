#!/bin/bash
# build and remote run on parlab

readonly TARGET_FOLDER="/home/bendaja1/03-levenshtein"

rm -f ./*/levenshtein
make -C framework
make -C serial
echo "Done."

scp -rq ./* parlab:$TARGET_FOLDER/
ssh -t parlab "rm -f $TARGET_FOLDER/speedups.log"


ssh -t parlab "cd $TARGET_FOLDER ; rm -f $TARGET_FOLDER/run.log  ; bash -l -c 'sbatch $TARGET_FOLDER/run.sh $TARGET_FOLDER/data/01-32k'"
sleep 4
ssh parlab "cat $TARGET_FOLDER/run.log "
ssh parlab 'echo "scale=1; $(sed -n "1p;3p" ~/03-levenshtein/run.log | paste -s -d/ -)" | bc'
ssh parlab 'echo "scale=1; $(sed -n "1p;3p" ~/03-levenshtein/run.log | paste -s -d/ -)" | bc >> ~/03-levenshtein/speedups.log'

ssh -t parlab "cd $TARGET_FOLDER ; rm -f $TARGET_FOLDER/run.log  ; bash -l -c 'sbatch $TARGET_FOLDER/run.sh $TARGET_FOLDER/data/02-64k'"
sleep 16
ssh parlab "cat $TARGET_FOLDER/run.log "
ssh parlab 'echo "scale=1; $(sed -n "1p;3p" ~/03-levenshtein/run.log | paste -s -d/ -)" | bc'
ssh parlab 'echo "scale=1; $(sed -n "1p;3p" ~/03-levenshtein/run.log | paste -s -d/ -)" | bc >> ~/03-levenshtein/speedups.log'

ssh -t parlab "cd $TARGET_FOLDER ; rm -f $TARGET_FOLDER/run.log  ; bash -l -c 'sbatch $TARGET_FOLDER/run.sh $TARGET_FOLDER/data/03-128k'"
sleep 64
ssh parlab "cat $TARGET_FOLDER/run.log "
ssh parlab 'echo "scale=1; $(sed -n "1p;3p" ~/03-levenshtein/run.log | paste -s -d/ -)" | bc'
ssh parlab 'echo "scale=1; $(sed -n "1p;3p" ~/03-levenshtein/run.log | paste -s -d/ -)" | bc >> ~/03-levenshtein/speedups.log'






echo "\n Total speedup:"
ssh parlab "awk '{ if (\$1 != 0) { sum += 1/\$1; n++ } } END { if (n > 0) printf \"%.6f\n\", n/sum }' ~/03-levenshtein/speedups.log"
