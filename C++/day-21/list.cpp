#include<iostream>
using namespace std;
#include<list>

int main()
{
    list<int> lst;  //creat a empty list

    int i;
    for(i=0;i<10;i++)
        lst.push_back(i);//end of for

    cout<<"size = "<<lst.size()<<endl;
    cout<<"contents: ";
    list<int>::iterator p = lst.begin();
    while (p!=lst.end())
    {
        cout<<*p<<" ";
        p++;
    }//end of while

    cout<<"\n\n";

    p=lst.begin();

    while (p!=lst.end())
    {
        *p=*p+100;
        p++;
    }//end of while

    cout<<"contents modified: ";

    p=lst.begin();

    while (p!=lst.end())
    {
        cout<<*p<<" ";
        p++;
    }//end of while
    cout<<"\n\n";

    p =lst.end();
    cout<<"revers: ";

    while (p!=lst.begin())
    {
        p--;
        cout<<*p<<" ";
    }//end of while

    return 0;
    
    
    
}