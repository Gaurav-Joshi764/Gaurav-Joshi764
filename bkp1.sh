#!/bin/bash 
Backuppath=home/ubuntu/backup
echo This is the directory\$Backuppath for $USERNAM
file=/etc/resolv.conf
echo "File is\ $file"

#read -p "Enter value" n1 n2 n3
#echo "Value entered is $n1 $n2 $n3"

#read -p "enter the domain name"
#domain_name
#dig $domain_name

#read -s -p "enter the password:"my_pass
#echo "password is $my_pass"


#nameserver="ns1.iqb.com ns2.iqb.com ns3.iqb.com"
#read -r ns1 ns2 ns3 <<<$nameserver
#echo name server are $ns1 $ns2 $ns3
#echo $IFS


#read -p "Enter the value:" x y
#echo Values are $x and $y
#ans=$(($x+$y))
#echo answer is $ans


declare -i y=10
declare -i x=5
ans=$((x+y))
echo " answer is $ans"
x=a
ans1=$((x+y))
echo answer1 is $ans1



