#include<iostream>

using namespace std;

template<class t1>

void sum(t1 a, t1 b, t1 c)
{
    cout<<"sum: "<<a+b+c<<endl;
}

template<class t1, class t2>
void sum(t1 a, t2 b, t1 c)
{
    cout<<"sum: "<<a+b+c<<endl;
}

int main()
{
    int a,b;
    float x,y,z;
    cout<<"enter two integers"<<endl;
    cin>>a>>b;
    cout<<"enter three double:"<<endl;
    cin>>x>>y>>z;

    sum(x,y,z);
    //sum(a,b);
    sum(a,x,b);

    return 0;
}