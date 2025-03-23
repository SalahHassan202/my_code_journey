// prototype function.... (OPP)
#include <iostream>
# include <string >
#include <algorithm>
#include <cmath>
using namespace std;
class rect     // rectangle
{
    public:
       int width ;
       int height;

        // member function ===> it is a function inside Class

        int print();
} ;
// prototype function 
int rect::print()
{
    return width*height ;

}

int main ()
{
    rect object1 ;
    object1.width = 30 ;
    object1.height = 20;

    // member function 
    cout<< object1.print();


    return 0 ;
}