#!/bin/bash

target=$1
proj=$2

[ "" == $1 ] && exit 1

[ -d ~/shm/out_$target ] || mkdir ~/shm/out_$target
rm -rf out_$target/*
rm -rf out_$target
ln -sf ~/shm/out_$target out_$target
time parallel --bar -k bash ./run.sh $proj {/} $target ::: $(ls in_${target}/*.txt)
