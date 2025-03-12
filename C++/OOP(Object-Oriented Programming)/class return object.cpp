// class return object
#include <iostream>
#include <string >
#include <algorithm>
#include <cmath>
using namespace std;

class Count
{
    private :
        int value = 0 ;
    public :
        Count() :  value (5) { }              // new method to write constructor
        
        Count operator +(Count ob)        // class return object
        {
            Count result ;
            result.value = value + ob.value ;          // int (number) ;
            return result ;            // object 


        }
        void print()
        {
            cout << "value is : " << value << endl;
        }
        
} ;

int main ()
{      
    Count count1 ;
    Count count2 ;
    Count result ;
    result = count1 + count2 ;
    count1.print() ;        // 5
    count2.print() ;        // 5
    result.print() ;        // 5 + 5 = 10 

    return 0 ;
}

