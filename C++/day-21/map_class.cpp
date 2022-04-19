#include<iostream>
#include<map>
#include<string.h>
using namespace std;

class name
{
    char str[40];
    public:
        name()
        {
            strcpy(str,"");
        }
        
        name(char *s)
        {
            strcpy(str,s);
        }

        char *get()
        {
            return str;
        }
};
//must define less than relative to name objects.

bool operator<(name a, name b)
{
    return strcmp(a.get(), b.get())<0;  //true/flase
}

class phoneNum
{
    char str[80];
    public:
        phoneNum()
        {
            strcmp(str,"");
        }

        phoneNum(char *s)
        {
            strcpy(str,s);
        }

        char *get()
        {
            return str;
        }
};

int main()
{
    map<name,phoneNum> directory;
    //put names and numbers into map

    directory.insert(pair<name,phoneNum>(name("Emp1"),phoneNum("555-1111")));
    directory.insert(pair<name,phoneNum>(name("Emp2"),phoneNum("555-2222")));
    directory.insert(pair<name,phoneNum>(name("Emp3"),phoneNum("555-3333")));
    directory.insert(pair<name,phoneNum>(name("Emp4"),phoneNum("555-4444")));

    //given a name, find number

    char str[80];
    cout<<"enter name: ";
    cin>>str;
    

    map<name,phoneNum>::iterator p; //iterator

    p=directory.find(name(str));    //find() func for search op

    if(p!=directory.end())
        cout<<"phone number: "<< p->second.get();
    else
        cout<<"name is not in directory.\n";


}