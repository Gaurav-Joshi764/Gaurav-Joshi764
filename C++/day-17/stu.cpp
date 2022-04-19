#include<iostream>
#include<fstream>

using namespace std;

class student
{

    int roll;
    char name[30];
    float marks;
    public:
        void getdata();
        void display();

        student()
        {
            void getdata();
            void display();
        }
}; //end class

void student :: getdata()
{

    cout<<"enter roll no"<<endl;
    cin>>roll;
    cin.ignore();
    cout<<"Name"<<endl;
    cin.getline(name,30);
    cout<<"Marks" <<endl;
    cin>>marks;

}

void student :: display()
{
    cout<<"roll: "<<roll<<"\tname: "<<name<<"\tmarks: "<<marks<<endl;
}
int main()
{

    fstream file;
    int i,n=0,choies;



    student s[n];

    while()
    {
        cout<< "1.enter student details" << endl;
        cout<< "2.find student" << endl;
        cout<< "3.exit" << endl;
        cin>>choies;

        switch(choies)
        {
        case 1:
            n++;
            file.open("bject.txt", ios::out);
            s[n].getdata();
            file.write((char*) &s[n], sizeof(s[n]));
            file<<" "<<endl;
            file.close();

        case 2:
            file.open("object.txt", ios::in);
            file.read((char*) &s[n], sizeof(s[n]));
            s[n].display();
            file.close();

        case 3:
            return 0;
        }
    }

  /*  for(i=0;i<2;i++)
        {
            s[i].getdata();
            file.write((char*) &s[i], sizeof(s[i]));
            file<<" "<<endl;
        }*/ //end for

   // file.close();

 /*   file.open("object.txt", ios::in);

    cout<<"reading" << endl;

    for(i=0;i<2;i++)
        {
            file.read((char*) &s[i], sizeof(s[i]));
            s[i].display();
        } //end for

    file.close();*/
   // return 0;
} // end main