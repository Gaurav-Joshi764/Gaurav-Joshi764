#!/bin/bash
pass_file=cd /etc/password
if test "$1" == ""
then
	echo"ERR: format should be $0 username"
	exit 1
else
	grep"^$1 $pass_file>/dev/null"
	status=$?

	if test $status -eq 0
	then
		echo"user exists"
	else
		echo"user not found"
	fi
fi
