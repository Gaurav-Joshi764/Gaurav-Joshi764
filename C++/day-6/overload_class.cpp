#include<iostream>

using namespace std;
class ClassB;
class ClassA
{
    int x,y;
public:
    ClassA(int i=0, int j=0)
    {
        x=i;
        y=j;
    }

    void getdata()
    {
        cout<<"value of x is: "<< x << "and value of y is: "<< y << endl;

    }

    friend ClassA operator+(ClassA q1, ClassB q2);
};

class ClassB
{
    int x,y;
public:
    ClassB(int i=0, int j=0)
    {
        x=i;
        y=j;
    }

    void sum()
    {
        cout<<"sum of x and y is: "<< x+y <<endl;

    }

    void getdata()
    {
        cout<<"value of x is: "<< x << "and value of y is: "<< y << endl;

    }

    friend ClassA operator+(ClassA q1, ClassB q2);
};

ClassA operator+(ClassA q1, ClassB q2)
{
    ClassA t;
    t.x = q1.x + q2.x;
    t.y = q1.y + q2.y;
    return t;
}

int main()
{
    ClassA q1(2,4);
    q1.getdata();

    ClassB q2(3,6);
    q2.getdata();

    ClassA q3 = q1+q2;
    q3.getdata();

    return 0;
}
