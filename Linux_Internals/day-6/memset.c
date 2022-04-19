#include<stdio.h>
#include<string.h>

int main()
{
    const char str[]= "linuxkernale.com";
    const char ch = '#';
//char *ret;

    printf("string before set/init is %s\n",str);
    nemset(str,ch,strlen(str));  //func & arry naME itself 

    printf("string after the set is : %s\n",str);

    return 0;


}