// operator overloading...... (OPP)
// *= operator overloading
#include <iostream>
#include <string >
#include <algorithm>
#include <cmath>
using namespace std;

class Test
{
    private :
        int x = 0 ;
    public :
        Test()
        {
            cout << "enter x : " ;
            cin >> x ;
        }
        void operator *=(int y)
        {
            x*= y ;      // x = x + 5                  
        }
     
        void print()
        {
            cout << "x is : " << x << endl;
        }
} ;

int main ()
{      
    Test ob1 ;
    ob1 *= 20 ;
    ob1.print() ;


    return 0 ;
}

