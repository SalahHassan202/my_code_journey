//two classes...... (OPP)
#include <iostream>
# include <string >
#include <algorithm>
#include <cmath>
using namespace std;

class Person 
{
    private :
        string name ;
        int age ;
        string email ;
    public :
        void setValues (string n , int a , string em)
        {
            name = n ;
            age = a ;
            email = em ;
        }
        void print ()
        {
            cout << "name is " << name << " , " << "age is " << age << " , " << "amail is " << email ;
        }
} ;

class Student 
{
    private :
        int grade ;
    public :
    void setGrade(int g)
    {
        grade = g ;
    }
    void print()
    {
        cout << "grade is " << grade << endl;
    }
};
int main ()
{      

    cout << "************* Class 1 ************* " << endl;
    Person ob1 ;
    ob1 .setValues ("salah" , 22 , "salah_231@gmail.com") ;
    ob1.print() ;
    cout << endl;

    cout << "************* Class 2 ************* " << endl;
    Student ob2 ;
    ob2 .setGrade(120);
    ob2.print() ;


    return 0 ;
}