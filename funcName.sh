#!/bin/bash
#use of FUNCNAME

backup()
{

local d=$1
[ -f "$d" ] && { echo "$d is file "; exit 0;}
[ -d "$d" ] && { echo "$d is directory"; exit 0;}

}
backup $1 
echo "checked"

