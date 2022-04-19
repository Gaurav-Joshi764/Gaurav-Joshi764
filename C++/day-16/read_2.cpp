#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream input;
    string str,str2,str3;
    input.open("data1.txt");
    //fstream input("data.txt"); //alternative way
    if(!input)
    {
        cout<<"file did not open"<<endl;
    }
    else
    {
        while (!input.eof())
        {
            input>>str>>str2>>str3;
            cout<<str << "\t "<< str2<< "\t "<<str3<<endl;
        }

        
    }

    return 0;
}