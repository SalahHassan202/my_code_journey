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
    First()                    // deafult constructor in inheritance
    {
        cout << "Hi Iam A Constructor Of First Class" << endl;
    }
} ;

class Second : public First               // single inheritance 
{
    private :
        int y ;
    public :
    Second()                    // deafult constructor in inheritance
    {
        cout << "Hi Iam A Constructor Of Second Class" << endl;
    }
    
};

int main ()
{      

    First ob1 ;    // print ===> Hi Iam A Constructor Of First Class
    cout << "******************" << endl;
    Second ob2 ;   // print ===> Hi Iam A Constructor Of First Class   ,,,, Hi Iam A Constructor Of Second Class

    return 0 ;
}