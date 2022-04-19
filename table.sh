#!/bin/bash

echo "enter number"
read num
i=0

for i in {1..10}
do 
	n=$((num*i))
	echo "$num*$i= $n"
done
