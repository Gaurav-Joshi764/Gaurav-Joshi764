#include<iostream>
using namespace std;

class student
{
  public:
  int rollNo;
  string name;
};
class test
{
  public:
  int subject1;
  int subject2;
  int subject3;
  int subject4;
  int subject5;
 
 
};
class result:public student,public test
{
  public:
  void display()
  {
    float total;
    total = subject1+subject2+subject3+subject4+subject5;
    cout<<"total:"<<total<<endl;
    cout<<"percentage:"<<(total/500)*100;
  }
 
};
int main()
{
  result obj1;
  cout<<"roll no:";
  cin>>obj1.rollNo;
  cout<<"enter name:";
  cin>>obj1.name;
  cout<<"enter marks of student 1:";
  cin>>obj1.subject1;
  cout<<"enter marks of student 2:";
  cin>>obj1.subject2;
  cout<<"enter marks of student 3:";
  cin>>obj1.subject3;
  cout<<"enter marks of student 4:";
  cin>>obj1.subject4;
  cout<<"enter marks of student 5:";
  cin>>obj1.subject5;
  obj1.display();
}
