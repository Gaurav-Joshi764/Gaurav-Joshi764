//static data member

#include <iostream>

using namespace std;

class A
{
    int x;
    public:
        A()
        {
            cout << "A's constructor called " << endl;
        }
};

class B
{
    static A a;
    public:
        B()
        {
            cout << "B's constructor called " << endl;
    }
};

A B::a; // definition of a

int main()
{
    B b1, b2, b3;

    return 0;
}
