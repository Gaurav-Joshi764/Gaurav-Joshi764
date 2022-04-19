#include<iostream>
using namespace std;

template<class x>
void swapp(x &a, x &b)
{
    x temp;
    temp =a;
    a = b;
    b = temp;

    cout<< "inside template swap.\n";
}

//overrides the generic version of swap() for int.

void swapp(int &a,int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    cout<< "inside int specialization.\n";
}

int main()
{
    int i=10,j=20;
    double x=10.1, y=23.3;
    char a='x', b='z';

    cout<<"Original i,j: "<< i << " " << j <<"\n";
    cout<<"Original x,y: "<< x << " " << y <<"\n";
    cout<<"Original a,b: "<< a << " " << b <<"\n";

    swapp(i, j);//call explicitly swap()
    swapp(x, y);//calls generic swap()
    swapp(a, b);//calls generic swap()

    cout<< "Swapped i, j: "<< i << " "<< j <<"\n";
    cout<< "Swapped x, y: "<< x << " "<< y <<"\n";
    cout<< "Swapped a, b: "<< a << " "<< b <<"\n";

    return 0;
}