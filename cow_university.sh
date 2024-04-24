#!/bin/bash

i=2
if [ $1 -gt 0 ] 
then
    cowsay 1
    sleep 1
fi

while [ $i -lt $1 ] 
do
    tmp=1
    j=2 
    while [ $j -lt $i ]
    do
         res=$(( $i % $j ))
        if [ $res -eq 0 ]
        then
          tmp=0
          break
        fi
        j=$(( $j+1 ))
    done
    if [ $tmp -eq 1 ]
    then
       echo $i | cowsay 
       sleep 1
    fi
    i=$(( $i+1 ))  
done



    