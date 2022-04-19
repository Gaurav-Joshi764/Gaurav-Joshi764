#include<stdio.h>
#include<stdlib.h>
void buggy(int *p)  //3.func using that value
{
    p[0]=10;    //4.writeing to adrr
    free(p);    //5.free ptr
}

int main()
{
    int *ptr;
    ptr = (int *)malloc(4); //1.creating 4 bytes
    buggy(ptr); //2.passing addr of 4 bytes to throught a ptr
    free(ptr);  //6.double free i.e trying to free a ptr already freed
}