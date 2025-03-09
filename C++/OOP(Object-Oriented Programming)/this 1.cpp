// this
#include <iostream>
using namespace std;
 
// this ===> مؤشر بيؤشر علي الاوبجكت الذي استعدي الاقتران 
//  او   هو بويتنر بيستدعي العنوان 

class Stud
{
    public :
        void address()
        {
            cout << this ;
        }
} ;

int main()
{
    Stud a , b , c ;
    cout << "The Address Of a is :: " ;
    a.address();
    cout << endl; 
    cout << "        OR        " << endl;
    cout << "The Address Of a is :: "  << &a << endl;
    cout << "****************************************" << endl;

    
    cout << "The Address Of b is :: " ;
    b.address();
    cout << endl; 
    cout << "        OR        " << endl;
    cout << "The Address Of b is :: "  << &b << endl;
    cout << "****************************************" << endl;

    
    cout << "The Address Of c is :: " ;
    c.address();
    cout << endl; 
    cout << "        OR        " << endl;
    cout << "The Address Of c is :: "  << &c << endl;
    cout << "****************************************" << endl;

    
    return 0 ;
}
