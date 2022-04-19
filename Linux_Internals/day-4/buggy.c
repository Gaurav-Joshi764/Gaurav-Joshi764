#include<stdio.h>
#include<stdlib.h>

void buggy()
{
    int *intptr;
    int i;
    intptr = (int *)malloc(sizeof (int)*5); // int data type = 4bytes

    printf("MALLOC checking : addr=%00x and size=%d\n",sizeof (int )*5);

    for(i=0;i<=4;i++)
    {
        *intptr = 100;
        printf("value at intptr =%d\n",(*intptr));
        intptr++;
        //printf("value at per intptr =%d\n",(*intptr));
    }
}

int main()
{
    buggy();
    return 0;
}