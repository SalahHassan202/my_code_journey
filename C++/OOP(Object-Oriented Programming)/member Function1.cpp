// member function .... (OPP)
#include <iostream>
# include <string >
#include <algorithm>
#include <cmath>
using namespace std;
class Book
{
    public:
        string title ;
        string author ;
        int price ;

        // member function ===> it is a function inside Class

        void print()
        {
            cout<<"title "<<title<<endl;
            cout<<"author "<<author <<endl;
            cout<<"price "<<price <<endl;
        }
        
} ;

int main ()
{
    Book object1 ;
    object1.title = "PYTHON" ;
    object1.author = "SALAH HASSAN " ;
    object1.price = 200 ;

    // member function 
    object1.print();


    return 0 ;
}