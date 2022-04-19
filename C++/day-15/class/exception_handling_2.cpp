#include<iostream>
using namespace std;

void Xtest(int test)
{
    cout<<"inside Xtest, test is: "<<test<<"\n";
    if(test)throw test;
}

int main()
{
    cout<<"start\n";
    try
    {
        cout<<"inside try block\n";
        Xtest(0);
        Xtest(1);
        Xtest(2);
    }
    catch(int i)
    {
        cout<<"Caught an exception -- value is:";
        cout<<i<<"\n";
    }

    cout<<"end";
    return 0;
    
}