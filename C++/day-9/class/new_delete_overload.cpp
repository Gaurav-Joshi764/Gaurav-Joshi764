//overloading new and delete operator

#include<iostream>
using namespace std;

class location
{
    int lon,lat;

public:
    location()
    {
        lon = 0;
        lat = 0;
        cout<< "default\n";
    }

    location(int a,int b)
    {
        lon = a;
        lat = b;
        cout<<"param\n";
    }

    void display()
    {
        cout<<"Coordinates are, lon: "<< lon << "lat: "<< lat<< endl;
    }

    void * operator new(size_t byte)
    {
        void *ptr;
        cout << "inside the overloaded new"<< endl;
        ptr = malloc(byte);
        if(ptr==NULL)
        {
            cout<<"could not allocate the memory\n";
//            exit();
        }
        return ptr;
    }

    void operator delete(void *ptr)
    {
        cout << "inside the overloaded delete"<< endl;
        free(ptr);

    }
};

class demo
{
    int a,b;
public:
    demo()
    {
        cout<<"inside demo's const\n";
    }

    void display()
    {
        cout << "demo object's values are: "<< a<< "  "<< b<<endl;
    }
};

int main()
{
    location l1,l2(10,5);
    l2.display();

    location *loc = new location(2,2);
    loc->display();

    delete loc;

    int *pt = new int;
    demo *pt2 = new demo;

    return 0;

}
