#!/bin/bash

current=$1
highest=$2

if [ ! -f $highest ] ; then
	echo 0 > $highest
fi

now=$(cat $current)
prev=$(cat $highest)

if [ $now -gt $prev ] ; then
	echo "最大値更新!"
	echo "$prev to $now"
	echo "diff = $((now - prev))"
	echo $now > $highest
else
	echo "更新できず"
	echo "$prev to $now"
	echo "diff = $((now - prev))"
fi
