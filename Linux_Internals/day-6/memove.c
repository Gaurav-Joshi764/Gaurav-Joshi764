#include<stdio.h>
#include<string.h>

int main()
{
    char dest[]= "oldstring";
    const char src[] = "newstring";

    printf("before the memmove dest =%s, src = %s\n",dest,src);
    memmove(dest,src,9);

    printf("after memove dest : %s src = %s\n",dest,src);

    return 0;
}