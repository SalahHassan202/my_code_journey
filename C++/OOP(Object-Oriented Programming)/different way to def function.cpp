// different way to def function .... (OPP)
#include <iostream>
# include <string >
#include <algorithm>
#include <cmath>
using namespace std;


class Cal
{
    private :
        int x ; 
        int y ;
    public :
        Cal()              // default constractor
        {
            x = 10 ; 
            y = 20 ;
        }
       
        int sum() ;
        
        
} ;
int Cal :: sum()
{
    return x + y ;
}
int main ()
{      
   Cal ob1 ;
   cout << ob1.sum() << endl;
   
    return 0 ;
}