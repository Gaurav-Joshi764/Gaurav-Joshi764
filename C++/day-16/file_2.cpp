#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream fin,fout;
   
    fin.open("data.txt");
    fout.open("data1.txt"); //create data1.txt first
    
    char ch; 

    while (!fin.eof())
    {
        fin.get(ch);
        fout<<ch;
    }

    cout<<"copy done!! "<<endl;

    fin.close();
    fout.close();

    return 0;
}