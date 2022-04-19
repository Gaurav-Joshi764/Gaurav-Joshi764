#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<char, int> m;
    int i;

    //put pairs to map
    for ( i = 0; i < 26; i++)
    {
        m.insert(pair<char,int>('A'+i, 65+i));
    }

    char ch;
    cout<<"enter key(an uppercase letter): ";
    cin>>ch;
    map<char,int>::iterator p;
    //find value given key

    p=m.find(ch);
    if(p!=m.end())
        cout<<"it's aascii value is "<<p->second;
    else
        cout<<"key not in map.\n";

    return 0;
    
}