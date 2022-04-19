#include <iostream>
using namespace std;

// base class
class Person {

   public:
    void eat() {
        cout << "I can eat!" << endl;
    }

    void sleep() {
        cout << "I can sleep!" << endl;
    }
};

// derived class
class Doctor{
 
   public:
    void dr() {
        cout << "I'm doctor" << endl;
    }
};

class nurse : public Doctor,public Person{

    public:
     void nu() {
        cout << "I'm doctor's nurse" << endl;
    }

};


int main() {

    nurse n1;


    n1.eat();
    n1.sleep();


    n1.dr();

   n1.nu();

    return 0;
}
