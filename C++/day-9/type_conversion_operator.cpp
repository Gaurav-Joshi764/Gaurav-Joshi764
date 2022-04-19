//Conversion from basic type to class type Using Operator

#include<iostream>
#include<conio.h>

using namespace std;

class Time
{
    int hrs,min;

    public:
        void display()
        {
            cout<<hrs<< ": Hour(s)\n";
            cout<<min<<": Minutes\n";
        }

        // overloading function
        void operator =(int t)
        {
            cout<<"\nBasic Type to Class Type Conversion...\n";
            hrs=t/60;
            min=t%60;
        }
};

int main()
{
    Time t1;

    int duration;
    cout<<"Enter time duration in minutes";

    cin>>duration;
    cout<<"object t1 overloaded assignment..."<<endl;

    t1=duration;
    t1.display();

    cout<<"object t1 assignment operator 2nd method..."<<endl;
    t1.operator=(duration);

    t1.display();

    return 0;
}

