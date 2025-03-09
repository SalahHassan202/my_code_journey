// call by value
#include <iostream>
using namespace std;

void changeValue(int x , int y )            // call by value
{
    int temp = x ;
    x = y ;
    y = temp ;

    cout << "Values Inside Function :: " << endl;
    cout << "x is :: " << x << endl;
    cout << "y is :: " << y << endl;
    cout << "****************************" << endl;
}
int main()
{
    int x = 5 ; 
    int y = 10 ; 
    changeValue(x , y ) ;
    
    cout << "Values Outside Function :: " << endl;
    cout << "x is :: " << x << endl;
    cout << "y is :: " << y << endl;
    cout << "****************************" << endl;

    return 0 ;
}
