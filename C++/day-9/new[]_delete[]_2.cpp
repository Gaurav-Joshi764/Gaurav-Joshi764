//Overloading new and delete for a specific Class

#include <iostream>
#include <stdlib.h>

using namespace std;

class Dummy
{
public:
  Dummy()
  {
    std::cout<<"Dummy :: Constructor"<<std::endl;
  }
  ~Dummy()
  {
    std::cout<<"Dummy :: Destructor"<<std::endl;
  }

  // Overloading CLass specific new operator
  static void* operator new(size_t sz)
  {
    void* m = malloc(sz);
    std::cout<<"Dummy :: Operator new"<<std::endl;
    return m;
  }

  // Overloading CLass specific delete operator
  static void operator delete(void* m)
  {
    std::cout<<"Dummy :: Operator delete"<<std::endl;
    free(m);
  }
};

int main()
{
  int * ptr = new int;
  delete ptr;
  Dummy * dummyPtr = new Dummy;
  delete dummyPtr;
  return 0;
}
