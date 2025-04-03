// destructor.... (OPP)
#include <iostream>
# include <string >
#include <algorithm>
#include <cmath>
using namespace std;


class Sample
{
    private :
        int x ; 
        int y ;
    public :
        Sample()              // default constractor
        {
            x = 10 ; 
            y = 20 ;
        }
        ~Sample()            // destructor   // ~   ====>   delta
        {
            cout << "bye" << endl;
        }
        void show()
        {
            cout << "x is : " << x << endl;
            cout << "y is : " << y <<  endl;
        }
        
} ;

int main ()
{      
   Sample ob1 ;
   ob1.~Sample() ;           // destructor
   ob1.show() ;
   
    return 0 ;
}