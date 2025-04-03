// deafult constructor.... (OPP)
#include <iostream>
# include <string >
#include <algorithm>
#include <cmath>
using namespace std;

class Test 
{
    private :
        int a ; 
        int b ;

    public :
        Test()
        {
            cout << "Hi I am Salah Hassan" << endl;
            a = 10 ; b = 20 ;
        }
    
        void show()
        {
            cout << "A is : " << a << endl;
            cout << "B is : " << b << endl;

        }
} ;

int main ()
{      
    Test ob1 ;
    ob1.show() ;  
   
    return 0 ;
}