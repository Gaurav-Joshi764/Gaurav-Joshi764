
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
   char line[100];
    fstream file;
    file.open('data.txt'ios::out|ios::app);

    if(file.fail())
        cout<<"file did not open"<<endl;
    
    else
    {
        cout<<"name"<<endl;
        cin.getline(line,100)<<endl;
        file<<line<<endl;//append
        cout<<"age"<<endl;
        cin.getline(line,100);

        file<<line<<endl;
        cout<<"file updated"<<endl;
    }

    return 0;
}