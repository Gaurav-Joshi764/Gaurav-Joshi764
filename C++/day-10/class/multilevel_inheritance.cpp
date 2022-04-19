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
class Doctor : public Person {
 
   public:
    void dr() {
        cout << "I'm doctor" << endl;
    }
};

class nurse : public Doctor{

    public:
     void nu() {
        cout << "I'm doctor's nurse" << endl;
    }

};


int main() {
    // Create object of the Doctor class
    nurse n1;

    // Calling members of the base class
    n1.eat();
    n1.sleep();

    // Calling member of the derived class
    n1.dr();

   n1.nu();

    return 0;
}
