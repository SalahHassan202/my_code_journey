// override function with inheritance...... (OPP)
#include <iostream>
# include <string >
#include <algorithm>
#include <cmath>
using namespace std;

/*
single inheritance
class A
class B : public A
class C : public A
class D : public A

*******************************************************

multible inheritance
class A
class B 
class C 
class D : public A , public B , public C

*/

class A
{
    public :
    void print()
    {
        cout <<"Function from class A " << endl;
    }
} ;

 
class B : public A
{
    public :
    void print()
    {
        A :: print() ;              //  override function
        cout <<"Function from class B " << endl;
    }
} ;

 
int main()
{
   /*  

    A ob1 ;
    ob1.print() ;              //print ====>      //! Function from class A 
    cout <<"*********************" << endl;
    
    B ob2 ;
    ob2.print() ;               //print ====>      //! Function from class B 
    cout <<"*********************" << endl;

    */

   B ob3 ;
   ob3.print() ; 
   // print two lines 
   //! Function from class A 
   //! Function from class B 


    return 0 ;
}

