#include<iostream>
using namespace std;

class shape
{
    protected:
    float x;

    public:
    void getData()
    {
        cin>>x;
    }
    
    virtual float calculateArea() = 0;
};

class square : public shape
{
    public:
    float calculateArea()
    {
        return x*x;
    }
};


int main(void)
{
    shape *ptr;
    square sq1;

    ptr=&sq1;

    ptr->getData();
    ptr->calculateArea();

    return 0;
}