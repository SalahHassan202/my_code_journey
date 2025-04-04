// new method to write constructor 
#include <iostream>
#include <string >
#include <algorithm>
#include <cmath>
using namespace std;

class Count
{
    private :
        int value = 0 ;
        int x = 0 ;
    public :
        Count() : value (20) , x (5)                // new method to write constructor 
        {
           
        }

        /* 
        Count()                  
        {
            value = 20 ;
            x = 5 ;
        } 
        */
        void print()
        {
            cout << "value is : " << value << endl;
            cout << "x is : " << x << endl;
        }
        
} ;

int main ()
{      
    Count ob1 ;
    ob1.print() ;

    return 0 ;
}

