#include<stdlib.h>
#include<stdio.h>
int main(int argc,char *argv[]) //argc count total number of arguments //argv store all perameter
{
    int i;
    printf("\nfile name: %s\n",argv[0]);
    printf("\ntotal number of arrguments: %d",argc);
    printf("\narguments pssed: ");
    for(i=1;i<argc;i++)
        printf("%s ",argv[i]);
    printf("\n");
}