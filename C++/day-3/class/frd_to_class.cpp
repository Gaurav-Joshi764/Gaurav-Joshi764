//Friend to another class

#include <iostream>

using namespace std;

class XYZ; //forward declaration

class ABC
{
    private:
    int numA;
    public:
        void setdata()
        {
            numA=10;
        }
        friend int add(ABC, XYZ);
};

class XYZ
{
    private:
    int numB;
    public:
        void setdata()
        {
            numB=25;
        }
        friend int add(ABC , XYZ);
};

int add(ABC objA, XYZ objB)
{
    return (objA.numA + objB.numB);
}
int main()
{
    ABC objA; XYZ objB;
    objA.setdata(); objB.setdata();
    cout<<"Sum: "<< add(objA, objB);

    return 0;
}
