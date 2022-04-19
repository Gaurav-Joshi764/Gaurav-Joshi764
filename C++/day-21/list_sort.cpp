#include<iostream>
using namespace std;
#include<list>

int main()
{
    list<int> lst1, lst2;  //creat a empty list

    int i;
    for(i=0;i<10;i++)
        lst1.push_back(rand()%20);//end of for

    for(i=1;i<11;i++)
        lst2.push_back(rand()%20);//end of for

    cout<<"size = "<<lst1.size()<<endl;
    cout<<"contents of lst1: \n";
    list<int>::iterator p = lst1.begin();
    while (p!=lst1.end())
    {
        cout<<*p<<" ";
        p++;
    }//end of while

    cout<<"\n\n";
    cout<<"contents of lst2: \n";

    p=lst2.begin();

    while (p!=lst2.end())
    {
        cout<<*p<<" ";
        p++;
    }//end of while

    cout<<"\n\n";
    cout<<"contents modified lst1: ";
    //sort the list
    lst1.sort();
    p=lst1.begin();

    while (p!=lst1.end())
    {
        cout<<*p<<" ";
        p++;
    }//end of while

    cout<<"\n\n";
    cout<<"contents modified lst2: ";
  //  lst2.sort();
    p=lst2.begin();

    while (p!=lst2.end())
    {
        cout<<*p<<" ";
        p++;
    }//end of while
    cout<<"\n\n";
//now,merge the list1 and list2 into :list1

    lst1.merge(lst2);
    if(lst2.empty())

    cout<<"lst2 is now empty:\n";
    cout<<"contents of lst1 after merge:\n";

    p=lst1.begin();
    while (p!=lst1.end())
    {
        cout<<*p<<" ";
        p++;
    }//end of while

    return 0;
    
    
    
}