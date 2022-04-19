#!/bin/bash
#this script is to verify the user password 
pass_file=/etc/passwd
read -p "Enter the username" username
grep "^$username" $pass_file>/dev/null
status=$?
if test $status -eq 0
then 
	echo "user is found"
else
	echo "user not found"
fi
