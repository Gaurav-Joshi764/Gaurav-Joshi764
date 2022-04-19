#include<iostream>

using namespace std;

template<class t>
void fun(t)
{
    static int i=10;
    cout<<++i<<endl;
    return;
}

int main()
{
    fun(1);
    fun(2);
    fun(10.1);

    return 0;
}