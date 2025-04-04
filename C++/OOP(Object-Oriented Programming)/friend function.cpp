// friend function...... (OPP)
#include <iostream>
# include <string >
#include <algorithm>
#include <cmath>
using namespace std;

class Student 
{
    private :
        int mark ;
    public :
        Student(int m)
        {
            mark = m ;
        }

        void print () ;
        friend void show (Student ob1) ;             // friend function
} ;
void Student :: print()
{
    cout << "Mark Is " << mark <<endl;
}

void show(Student ob1)                         // friend function
{
    cout << "Mark Is " << ob1.mark <<endl;         // ob1.mark ===> friend function don't have all memeber in the class
}


int main ()
{      
   
    Student ob1(100);
    ob1.print() ;
    show(ob1) ;

    return 0 ;
}