#include<iostream>
#include<string>

using namespace std;

class charInput
{
    public:
    string x;
    void add(char c)
    {
        x=x+c;
    }
    std::string getValue()
    {
        return x;
    }
};

class numInput : public charInput
{
    public:void add(char c)
    {
        if(c>='0'&& c<='9')
        {
            x=x+c;
        }
    }
};

int main()
{ 
    numInput* inputN = new numInput();
    inputN->add('1');
    inputN->add('a');
    inputN->add('0');
    
    cout<<inputN->getValue()<<endl;
    
    // the output should be 10
}

