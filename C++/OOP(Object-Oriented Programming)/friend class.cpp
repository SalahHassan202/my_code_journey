// friend class...... (OPP)
#include <iostream>
#include <string >
#include <algorithm>
#include <cmath>
using namespace std;

class Student1 
{
    private :
        int mark1 = 0 ; 
        string name = "unknown" ;
    public :
        Student1(int m , string n )
        {
            mark1 = m ;
            name = n ;
        }
        void print()
        {
            cout << "your name is " << name << endl;
            cout << "your mark is " << mark1 << endl;
        }
        // friend class 
        friend class Student2 ;
} ;

class Student2 
{
    private :
        int mark2 = 0 ; 
        string name = "unknown" ;
    public :
        Student2(string n )
        {
            name = n ;
        }
        void print()
        {
            cout << "your name is " << name << endl;
            cout << "your mark is " << mark2 << endl;
        }
        void setMark(Student1 ob)
        {
            mark2 = ob.mark1 ;
        }
} ;

int main ()
{      
    Student1 ob1 (100 , "salah" ) ;
    Student2 ob2("ali") ;
    ob2.setMark(ob1) ;
    ob2.print() ;

   

    return 0 ;
}