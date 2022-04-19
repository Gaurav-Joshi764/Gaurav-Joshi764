//Returning Objects from a Function

#include <iostream>

using namespace std;

class Calculator
{
    public:
    int input1;
    int input2;
    void setInput(int a, int b)
    {
        input1 = a;
        input2 = b;
    }
    Calculator add(Calculator obj1, Calculator obj2)
    {

        Calculator obj3;
        obj3.input1 = obj1.input1 + obj2.input1;
        obj3.input2 = obj1.input2 + obj2.input2;

        return obj3;
    }
};

int main()
{
    Calculator obj1, obj2, obj3;

    obj1.setInput(10,2);
    obj2.setInput(5,5);

    obj3 = obj1.add(obj1, obj2);
    cout << "Result: " << obj3.input1 << " " << obj3.input2;

    return 0;
}
