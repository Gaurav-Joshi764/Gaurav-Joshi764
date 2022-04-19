#include <iostream>

using namespace std;

class ABC
{
  public: int x;
    ABC (int a) // this is parameterized constructor
    {
      x=a;
    }
    ABC (ABC &i)    // this is copy constructor
    {
      x = i.x;
    }
};

int main ()
{
      ABC a1(40); // Calling the parameterized constructor.
      ABC a2(a1); // Calling the copy constructor.
      cout<<a2.x;

      return 0;
}
