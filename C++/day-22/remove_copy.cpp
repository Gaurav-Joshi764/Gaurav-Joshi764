#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    char str[]="I love c++ programming ";
    vector<char> v, v2(30);
    int i;
    for(i=0;str[i];i++)
    {
        v.push_back(str[i]);
    }

    cout<<"Input Sequence: \n";
    for(i=0;i<v.size();i++)
    {
        cout<<v[i];
        cout<<endl;
    }

    //remove all spaces 
    //remove_copy(v.begin(),v.end(),v2.begin(),' ');

    //replace spaces with colons
    replace_copy(v.begin(),v.end(),v2.begin(),' ',':');


    //(itr first, itr last, itr target, char_to_remove)

    cout<<"result after removing space:\n";
    for (i = 0; i < v2.size(); i++)
    {
        cout<<v2[i];
        cout<<endl;
    }
    
    return 0;
}