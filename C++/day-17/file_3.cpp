#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream outfile;
    outfile.open("data.txt");
    outfile<<"this is my life";
    long pos = outfile.tellp();
    outfile.seekp(pos+6);
    outfile<<"agin my life";
    outfile.close();
    cout<<"done!";

    return 0;
}