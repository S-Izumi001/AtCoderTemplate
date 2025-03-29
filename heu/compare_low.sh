#!/bin/bash

current=$1
lowest=$2

if [ ! -f $lowest ] ; then
	echo 0 > $lowest
fi

now=$(cat $current)
prev=$(cat $lowest)

if [ $now -le $prev ] ; then
	echo "最小値更新!"
	echo "$prev to $now"
	echo "diff = $((now - prev))"
	echo $now < $lowest
else
	echo "更新できず"
	echo "$prev to $now"
	echo "diff = $((now - prev))"
fi
