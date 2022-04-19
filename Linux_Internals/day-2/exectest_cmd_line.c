
#include<stdio.h>


int main(int argc,char *argv[])
{
    int i;
    printf("\nfile name : %s\n", argv[0]);//a.out
    printf("\ntotal number of arguments: %d\n", argc);
    printf("\n arguments passed: ");

    for(i=1;i<argc;i++)
     {
         printf("%s",argv[i]);
     }   
    
    printf("\n");

   // return 0;
}