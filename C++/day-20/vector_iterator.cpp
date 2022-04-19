#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<char> v(10);//creat a vector of length 10
    vector<char> :: iterator p; //create an itrator

    int i;
    //assign elements in vector a value
    p = v.begin();
    i=0;
    while (p!=v.end())
    {
       *p=i+'a';
       p++;
       i++;
    }

    cout<<"original contents:\n";
    p=v.begin();
    while (p!=v.end())
    {
        cout<<*p<<" ";
        p++;
    }

    //change contents of vector

    p=v.begin();

    while (p!=v.end())
    {
        *p=toupper(*p);
        p++;
    }

    cout<<"\nmodified contents:\n";

    p=v.begin();

    while (p!=v.end())
    {
        cout<<*p<<" ";
        p++;
    }
    
    
    
    
}