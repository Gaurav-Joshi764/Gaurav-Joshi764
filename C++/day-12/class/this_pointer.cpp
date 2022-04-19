#include<iostream>
using namespace std;

class temp{
    int a,b;

    public:
    void input(int a, int b)
    {
        this->a=a+b;
        this->b=a-b;

    }

    void output()
    {
        cout<<"a="<<a;
        cout<<"b="<<b;
    }
};

int main()
{
    temp ob;
   // int a=5 , b=6;

    ob.input(5,9);
    ob.output();

    return 0;
}