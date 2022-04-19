#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char buff_comm[5];
    //strcpy(buff_comm,"ls -l");
    strcpy(buff_comm,"pstree");
    printf("system() library function uses fork() to creat a child process:\n");
    printf("child process execute execl() which loads and run new program provided by ayatem() argument\n");

    system(buff_comm);

    return 0;
}