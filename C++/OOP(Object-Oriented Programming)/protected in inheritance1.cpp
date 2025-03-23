// protected in inheritance...... (OPP)
#include <iostream>
# include <string >
#include <algorithm>
#include <cmath>
using namespace std;

class First
{
    private :
        int x = 25 ;
    public :
        int y = 10;
    protected :
        int z = 37 ;
    public :
    void print()
    {
        cout << "z is protected and equla = " << z << endl;
    }
  
} ;

int main ()
{      

    First ob1 ;
    ob1.print() ;

    return 0 ;
}