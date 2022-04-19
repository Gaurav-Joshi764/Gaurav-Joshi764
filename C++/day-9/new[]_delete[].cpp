//Overloading new and delete at global level

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
};

// Overloading Global new operator
void* operator new(size_t sz)
{
  void* m = malloc(sz);
  std::cout<<"User Defined :: Operator new"<<std::endl;

  return m;
}

// Overloading Global delete operator
void operator delete(void* m)
{
  std::cout<<"User Defined :: Operator delete"<<std::endl;
  free(m);
}

// Overloading Global new[] operator
void* operator new[](size_t sz)
{
  std::cout<<"User Defined :: Operator new []"<<std::endl;
  void* m = malloc(sz);
  return m;
}

// Overloading Global delete[] operator
void operator delete[](void* m)
{
  std::cout<<"User Defined :: Operator delete[]"<<std::endl;
  free(m);
}

int main()
{
  int * ptr = new int;
  delete ptr;
  Dummy * dummyPtr = new Dummy;
  delete dummyPtr;
  int * ptrArr = new int[5];
  delete [] ptrArr;
  return 0;
}
