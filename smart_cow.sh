#!/bin/bash

res=$(echo "$1" |bc )
cowsay -e $res $1