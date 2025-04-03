// Constructor   .... (OPP)
#include <iostream>
# include <string >
#include <algorithm>
#include <cmath>
using namespace std;
class Book
{
    public:
        int pages ;
        string name ;
        
    // Constructor
    Book()
    {
        cout<< " hi i am constructor" <<endl;
    }
    // member function 
    void print()
    {
        cout<< "i am a function"<<endl;
        cout<< pages << endl;
        cout<< name << endl;
    }

};

int main ()
{
    Book ob11 ; 
    Book ob22 ;

    return 0 ;
}