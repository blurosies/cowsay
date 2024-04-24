#!/bin/bash

for i in $(seq 1 $1)
do
    if [ $i -ne $1 ] 
    then
        cowsay $i
        sleep 1
    else
        cowsay -T U $1
    fi
done
