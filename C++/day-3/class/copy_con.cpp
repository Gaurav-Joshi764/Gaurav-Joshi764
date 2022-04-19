//Copy Constructor

#include <iostream>

using namespace std;

class demo
{
    int m, n;
    public:
    demo(int x,int y)
    {
        m=x;
        n=y;
        cout<<"Parameterized Constructor"<<endl;
    }
    demo(demo &x)
    {
        m = x.m;
        n = x.n;
        cout<<"Copy Constructor";
    }
};

int main()
{
    demo obj1(5,6);
    //demo obj2(obj1);
    demo obj2 = obj1;

    return 0;
}
