#!/bin/bash

a=0
b=1
fn=0

while [ $fn -lt $1 ] 
do
    echo $fn | cowsay
    sleep 1
    a=$b
    b=$fn
    fn=$(expr $a + $b)
done
