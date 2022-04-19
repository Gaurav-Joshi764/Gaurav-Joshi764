#include <iostream>
using namespace std;

// base class
class Person {

   private:
	int pvt=1;

   protected:
	int prot=2;
   public:
	int pub =3;
   
   // function to access private member

   int getPVT(){
	return pvt;
   }

};

// derived class
class Doctor : private Person {
 
   public:

	int getProt(){
		return prot;
	}

	int getPub(){
		return pub;
	}
};

int main() {
    
	Doctor dr1;

	//cout<<"Private = "<<dr1.getPVT()<<endl;
	cout<<"Protected = "<<dr1.getProt()<<endl;
	cout<< "Public = "<<dr1.getPub()<<endl;

    return 0;
}
