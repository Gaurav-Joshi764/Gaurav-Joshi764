//basic type to class type conversion....using overloaing(casting)

#include<iostream>

using namespace std;

class Time
{
    int hour,min;

public:
    Time()
    {
        cout<<"Default\n"<<endl;
    }

    void display()
    {
        cout<<"Hour: "<< hour << "min: "<< min <<endl;
    }

//for constructor


    Time (int x)
    {
        cout<<"inside the time param\n";

        hour = x/60;
        min = x%60;
    }

 // using overloading::
/*
    void operator=(int x)
    {
        cout << "Inside overloaded\n";
        hour = x/60;
        min = x%60;
    }
    */
};

int main()
{
    int x = 130;

    Time t1(130);

   //t1 = x;
    t1.display();

    return 0;
}
