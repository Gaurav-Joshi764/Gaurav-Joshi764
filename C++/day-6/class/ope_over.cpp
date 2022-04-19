//Demo code to show operator overloading

#include<iostream>

using namespace std;

class Complex
{
    int real,img;
    public:
        Complex()   //default constructor
        {
            real = 0;
            img = 0;
        }

        //param const
        Complex(int x,int y)
        {
            real = x;
            img = y;
        }

        //display values
        void display()
        {
            cout<< "The value for real part: "<< real << "and img part: "<< img << endl << endl;
        }

        //overloding the '+' operator here
        Complex operator + (Complex obj)
        {
            Complex temp;
            temp.real = real + obj.real;
            temp.img = img + obj.img;

            return temp;
        } //end of overloading function

};  //end of complex class

int main()
{
    Complex c1(1,1), c2(5,10);
    Complex c3;

    c1.display();
    c2.display();
    c3.display();

    cout << "The action starts here: "<< endl;

    //add two objects
   // c3 = c1 + c2;
    c3 = c1.operator + (c2);
    c3.display();

    return 0;
}
