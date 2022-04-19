#include<iostream>
#include<exception>
using namespace std;

int main()
{
    try
    {
        int* myarry = new int[000000000000000];//1999999990000
        //no need to throw seprately
    }
    catch(exception &e)
    {
        cout<<"std exception"<<e.what()<<endl;
    }
    return 0;
}                                                                                  