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

int main() {
    // Create object of the Doctor class
    Doctor dr1;

    // Calling members of the base class
    dr1.eat();
    dr1.sleep();

    // Calling member of the derived class
    dr1.dr();

    return 0;
}
