// single inheritance...... (OPP)
#include <iostream>
# include <string >
#include <algorithm>
#include <cmath>
using namespace std;

class Person
{
    private :
        string name ;
    public :
    void setValues (string n) 
    {
        name = n ;
    }
    void print ()
    {
        cout << "name is " << name << endl;
    }
} ;

class Student : public Person                // single inheritance 
{
    private :
        int grade ;
    public :
    void setGrade(int g)
    {
        grade = g ;
    }
    void display()
    {
        cout << "grade is " << grade << endl;
    }
};

int main ()
{      

    Student ob1 ;
    ob1.setGrade(100) ;
    ob1.display() ;

    ob1.setValues("salah") ;
    ob1.print() ;


    return 0 ;
}