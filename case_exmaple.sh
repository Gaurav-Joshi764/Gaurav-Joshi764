#!/bin/bash
#case example script
read -p "enter the way you wish to take the backup" bktype
case $bktype in

tar)
	echo " compressing the file using tar"
	;;
zip)
	echo "compressing the file using gzip "
	;;
dump)
	echo "using mysql dump for backup"
	;; 
*)
	echo "enter either tar or zip or dump"
esac
