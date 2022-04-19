#include<iostream>
using namespace std;

template<class t, int n>
class mySequence
{
    t memblock[n];
    public:
    void setMember(int x, t value);
    t getMember(int x);

};

template<class t, int n>
void mySequence<t,n> :: setMember(int x,t value)
{
    memblock[x] = value;
}

template<class t, int n>
t mySequence<t,n> :: getMember(int x)
{
    return memblock[x];
}

int main()
{
    mySequence<int, 5>myints;
    mySequence<double, 5>myfloats;
    myints.setMember(0,100);
    myfloats.setMember(3,3.14);

    cout<< myints.getMember(0)<<endl;
    cout<< myfloats.getMember(3)<<endl;

    return 0;
}
