#!/bin/bash
proj=$1
input=$3
testcase=$2
~/shm/.programing_contest/${proj} < /Users/shotaizumi/proj/local/atcoder/${proj}/in_$input/$testcase > ~/shm/out_$input/$testcase
