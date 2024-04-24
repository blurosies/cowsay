#!/bin/bash

a=$(echo $1|cut -d "+" -f 1| cut -d "x" -f 1)
b=$(echo $1|cut -d "+" -f 2| cut -d "x" -f 1)
c=$(echo $1|cut -d "+" -f 3)

delta=$(echo "($b*$b)-(4*$a*$c)"|bc ) 

if [ $delta -lt 0 ] 
then
    cowsay -d Pas de solutions réelles!!
else
    x1=$(echo "(-1*$b -1*sqrt($delta))/2*$a"|bc )
    x2=$(echo "(-1*$b + sqrt($delta))/2*$a"|bc )
    cowsay -f fox Les solutions sont $x1 , $x2
fi