#include<stdio.h>
#include"calc_mean.h"

int main(int argc, char *argv[])
{
    double v1,v2,m1,m2;
    v1 = 5.2;
    v2 = 9.8;
    m1 = mean(v1,v2);
    m2 = sub(v1,v2);

    printf("the mean is %3.2f\n",m1);
    printf("the substraction is %3.2f\n",m2);
}