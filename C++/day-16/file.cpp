#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream input;
    string str,str2,str3;
    input.open("data.txt");
    char word[30]; 
    int count=0;

    if(!input)
    {
        cout<<"file did not open"<<endl;
    }
    else
    {
        /*while (!input.eof())
        {
            input>>word;
            count++;
        }*/

        while(getline(input, word))
        {
            count++;
        }
        
    }

    cout<<"total words: "<<count<<endl;

    input.close();

    return 0;
}