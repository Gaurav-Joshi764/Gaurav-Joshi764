#include<iostream>
using namespace std;


class A
{
    public:
    void displayA()
    {
        printf("this is A\n");
    }
};

class B
{
    public:
    void displayB()
    {
        printf("this is B\n");
    }
};

class C : public A
{
    public:
    void displayC()
    {
        printf("this is C\n");
    }
};

class D : public B
{
    public:
    void displayD()
    {
        printf("this is D\n");
    }
};

class E : public C, public D
{
    public:
    void displayE()
    {
        printf("this is E\n");
    }
};

class F : public E
{
    public:
    void displayF()
    {
        printf("this is F\n");
    }
};

int main()
{
    A a;
    B b;
    C c;
    D d;
    E e;
    F f;

    a.displayA();
    b.displayA();
    b.displayC();
    b.displayD();

    f.displayA();
    f.displayC();
    f.displayB();
    f.displayE();

    e.displayA();
    e.displayB();
    e.displayC();
}