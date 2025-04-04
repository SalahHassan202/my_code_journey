// overloading function.... (OPP)
#include <iostream>
# include <string >
#include <algorithm>
#include <cmath>
using namespace std;

class School 
{
    private :
        string name ;
        int level ; 
        int id ;

    public :
    // overloading function ===> two or three or four .... function have the same name with different parameter 
        void print()
        {
            cout << "Welcome" << endl;
        }
        void print(string name )
        {
            cout << "My Name Is Salah Hassan " << endl;
        }
            
} ;

int main ()
{        
    School x ;
    x.print() ;           // cout ===>      "Welcome"
    x.print("Salah") ;     // cout ===>   "My Name Is Salah Hassan "     


    return 0 ;
}