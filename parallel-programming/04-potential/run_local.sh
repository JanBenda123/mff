#!/bin/bash
make -C framework
make -C serial
echo "Done."



./serial/levenshtein_serial "$1.A" "$1.B" 
./framework/levenshtein "$1.A" "$1.B" 