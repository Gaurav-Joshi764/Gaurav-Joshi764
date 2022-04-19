#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream ofile;
    ofile.open("data1.txt");
    ofile<<"line one in the document"<< endl;
    ofile<<"another line"<<endl;

    cout<<"to the terminal"<<endl;

    ofile.close();

 
}