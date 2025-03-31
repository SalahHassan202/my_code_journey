// parameterized constructor.... (OPP)
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
        Test()                // default constructor
        {
           cout << "Hi I am a default constructor" << endl;
           a = 1 ; 
           b = 2 ;

        }
        Test(int x , int y)       // parameterized constructor
        {
            a = 10 ; b = 20 ;
            cout << "hi i am a parameterized constructor " << endl;
        }
    
        void show()
        {
            cout << "A is : " << a << endl;
            cout << "B is : " << b << endl;

        }
} ;

int main ()
{      
    Test ob1 ;                     // default constructor 
    Test ob2(10 , 20) ;           // parameterized constructor
    ob1.show() ;
    ob2.show() ;
    
   
    return 0 ;
}