#!/bin/bash

ssh aic "cat \$(ls -td ~/logs/*/ | head -n 1)/$1" > "./$1"



