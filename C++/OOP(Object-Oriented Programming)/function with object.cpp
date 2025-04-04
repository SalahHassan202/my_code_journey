// function with object .... (OPP)
#include <iostream>
# include <string >
#include <algorithm>
#include <cmath>
using namespace std;

class School
{
    private :
        string name ;
        int mark ;
    public :
        School(string n , int m )
        {
            name = n ;
            mark = m ;
        }
        void sum(School o1 , School o2)        // function with two object
        {
            cout << o1.mark + o2.mark << endl;
        }
} ;



int main ()
{      
   
    School ob1("Salah" , 200);
    School ob2("Hasan" , 300) ;
    ob1.sum(ob1 , ob2) ;             // function with two object


    return 0 ;
}