//Conversion from basic type to class type Using Constructor

#include<iostream>
#include<conio.h>

using namespace std;

class Time
{

    int hrs,min;

    public:
        Time(int t)
        {
        cout<<"Basic Type to Class Type Conversion...\n";
        hrs=t/60;
        min=t%60;
        }

        void show();
};

void Time::show()
{
    cout<<hrs<< ": Hours(s)" <<endl;
    cout<<min<< " Minutes" <<endl;
}

int main()
{

    //Accepting int type value from the user

    float duration;
    cout<<"\nEnter time duration in minutes";
    cin>>duration;

    //assigning int type value to object of class type
    Time t1=duration;
    t1.show();

    return 0;
}
