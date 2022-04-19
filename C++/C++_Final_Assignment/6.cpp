#include <iostream>
using namespace std;

class student
{
    int Atten;
    int g = 0;
    float t_s,T;

    public:

        void info()
        {
            cout << "Attendance : ";
            cin >> Atten;
            cout << "Test score : ";
            cin >> t_s;
            cout << "Total : ";
            cin >> T;
        }

/*The grades are awarded as follows:
    Grade is 10: if all conditions are met
    Grade is 9: if conditions 1 and 2 are met
    Grade is 8: if conditions 2 and 3 are met   //In question "Grade is 8: if conditions 3 and 3 are met " but that does not make any sense so..
    Grade is 7: if conditions 1 and 3 are met
    Grade is 6: if only one condition is met
    Grade is 5: if none of the conditions are met
*/
        int result()
        {
            if(Atten > 50) 
                g++; 

            if(t_s >= 0.70) 
                g = g + 2;

            if(T >= 5600) 
                g = g + 3;

            if(g == 0) 
                return 5; 

            if(g == 1 || g == 2 || g == 3) 
                return 6;

            if(g == 4) 
                return 7;

            if(g == 5) 
                return 8; 

             if(g == 3) 
                return 9;

            if(g == 6) 
                return 10; 

        }
};
int main()
{
    int grade_s1,grade_s2;
    student s1,s2;

    s1.info();
    grade_s1 = s1.result();
    cout << "The grade of the student_1 is : " << grade_s1 << endl;

    s2.info();
    grade_s2 = s2.result();
    cout << "The grade of the student_2 is : " << grade_s2 << endl;

    return 0;
}

