#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"enter a: ";
    cin>>a;
    try
    {
        if(a==1)
            throw a;
        else if(a==2)
            throw 'A';
        else if(a==3)
            throw 4.5;
    }
    catch(int x)
    {
        cout<<"exception int";
    }

    catch(char x)
    {
        cout<<"exception char";
    }

    catch(double x)
    {
        cout<<"exception double";
    }
    
}