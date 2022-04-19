#include<iostream>
#include<vector>
using namespace std;



int main()
{
    vector<char> v(10);
    cout<<"Size = "<<v.size()<<endl;
    for(int i=0;i<10;i++)
    {
        v[i] = i + 'a';
    }

    cout<<"current contents\n";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
        cout<<"\n\n";
    }

    cout<<"Expanding Vector\n";
    for(int i=0;i<10;i++)
    {
        v.push_back(i+10+'a');
    }

    cout<<"Size now = "<<v.size()<<endl;
    cout<<"Current contents:"<<endl;

    for(int i=0;i<v.size();i++)
    {
        v[i] = toupper(v[i]);
    }

    cout<<"Modified Contents:"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
        cout<<"\n\n";
    }
}