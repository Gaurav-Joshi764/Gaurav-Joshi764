#!/bin/bash
# testing commandline arguments
cmd()
{

var=$1
echo "the name of script is $0"
echo "first argument is $1"
echo "second arguments is $2"
echo "total no. of argument passed are $#"
echo "value of arguments are $*"
echo "value of arguments are $@"

}

echo "function call"
cmd city
echo "giving call second time"
cmd city kia nexa bmw
