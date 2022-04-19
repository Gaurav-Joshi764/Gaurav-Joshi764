/* use binary operator to perform the arithmetic operations in C++ */

#include <iostream>

using namespace std;

class Arith_num
{
    // declare data member or variable
    int num;
    public:
        // create a member function to take input
        void input()
        {
            num = 20; //define value to num variable
        }

        // use binary '+' operator to add number
        Arith_num operator + (Arith_num &ob)
        {
            // create an object
            Arith_num A;
            // assign values to object
            A.num = num + ob.num;
            return (A);
        }

        // overload the binary (-) operator
        Arith_num operator - (Arith_num &ob)
        {
            // create an object
            Arith_num A;
            // assign values to object
            A.num = num - ob.num;
            return (A);
        }

        // overload the binary (*) operator
        Arith_num operator * (Arith_num &ob)
        {
            // create an object
            Arith_num A;
            // assign values to object
            A.num = num * ob.num;
            return (A);
        }

        // overload the binary (/) operator
        Arith_num operator / (Arith_num &ob)
        {
            // create an object
            Arith_num A;
            // assign values to object
            A.num = num / ob.num;
            return (A);
        }

        // display the result of arithmetic operators
        void print()
        {
            cout << num;
        }
};
int main ()
{
    Arith_num x1, y1, res; // here we created object of class Addition i.e x1 and y1
    // accepting the values

    x1.input();
    y1.input();

    // assign result of x1 and x2 to res
    res = x1 + y1;
    cout << " Addition : " ;
    res.print();

    // assign the results of subtraction to res
    res = x1 - y1; // subtract the complex number
    cout << " \n \n Subtraction : " ;
    res.print();

    // assign the multiplication result to res
    res = x1 * y1;
    cout << " \n \n Multiplication : " ;
    res.print();

    // assign the division results to res
    res = x1 / y1;
    cout << " \n \n Division : " ;
    res.print();

    return 0;
}
