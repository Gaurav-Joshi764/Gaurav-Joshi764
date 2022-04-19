#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student  //structure defination
{
    int roll;
    char name[40],gender;
    float height;

}first; //declaring structure

int main()
{
    struct student second;  //declaring structure
    struct student third = {103,"hari parasad. D","M",5.11};    //declaring & initialising strucrure variable

    printf("\n roll\tname\t\t\t\t\tgender\theight\n");
    first.roll=10;
    strcpy(first.name,"monkey D. luffy");
    first.gender = "H";
    first.height = 5.6;
    printf("\n %3d\t%-40s\t%c\t%1.2f",first.roll,first.name,first.gender,first.height);
    printf("\n %3d\t%-40s\t%c\t%1.2f\n",third.roll,third.name,third.gender,third.height);

}