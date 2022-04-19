#include<stdio.h>
#include<string.h>

int main()
{
    const char str[]= "linuxkernale.com";
    const char ch = '.';
    char *ret;

    printf("string before char/scan is %s\n",str);
    ret = memset(str,ch,strlen(str));  

    printf("string after **%c** is **%s**",ch,ret-7);

    return 0;


}