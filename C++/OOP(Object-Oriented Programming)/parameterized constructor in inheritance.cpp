// constructor in inheritance...... (OPP)
#include <iostream>
# include <string >
#include <algorithm>
#include <cmath>
using namespace std;

class First
{
    private :
        int x ;
    public :
    First(int a)                    // parameterized constructor in inheritance
    {
        x = a ;
        cout << "Hi Iam A Constructor Of First Class" << endl;
    }
} ;

class Second : public First               // single inheritance 
{
    private :
        int y ;
    public :
    Second(int a , int b ) : First(a)                   // parameterized constructor in inheritance
    {
        y = b ;
        cout << "Hi Iam A Constructor Of Second Class" << endl;
    }
    
};

int main ()
{      

    First ob1(150) ;  
    Second ob2(100 , 200) ;     

    return 0 ;
}