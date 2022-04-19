#include<iostream>
using namespace std;

int main()
{
    int n1,n2,result;

    cout<<"enter the value of n1:";
    cin>>n1;

    cout<<"enter the value of n22:";
    cin>>n2;

    try{
        if(n2==0)
        {
            throw n2;
        }
        else
        {
            result = n1/n2;
            cout<<"\nthe result is: "<<result;
        }
    }

    catch(int x)
    {
        cout<<"\n can't divid by :"<<x;
    }
}