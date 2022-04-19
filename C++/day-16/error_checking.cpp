#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    fstream file;

    file.open("file.txt", ios::in);

    if(!file)
    {
        cout<<"file can't open"<<endl;
    }
}