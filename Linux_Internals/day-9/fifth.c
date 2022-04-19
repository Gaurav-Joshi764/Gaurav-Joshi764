#include<stdio.h>
#include<string.h>
struct A
{
    int roll;
    char name[40],gender __attribute__((aligned(2)));
    float height;

}__attribute__((packed));   //specifies how the compiler should align data items

int main()
{
    struct A first; //declaring structure
    printf("\n size of struct A %3d\n",sizeof(first));

    return 0;
}