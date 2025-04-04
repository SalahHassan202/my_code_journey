// multible in inheritance...... (OPP)
#include <iostream>
# include <string >
#include <algorithm>
#include <cmath>
using namespace std;

/*
single inheritance
class A
class B : public A

*******************************************************

multible inheritance
class A
class B 
class C 
class D : public A , public B , public C


*/

class A 
{
    private :
        string name ;
        int age ;
    public :
    A (string n , int a)
    {
        name = n ; 
        age = a ;
    }
    void print()
    {
        cout << "Your Name Is " << name << endl;
        cout << "Your Age Is " << age << endl;
    }
} ;

class B
{
    private :
        string email ;
    public :
    B (string em)
    {
        email = em ;
    }
    void print()
    {
        cout <<"Your Email Is " << email << endl;
    }
} ;

class C : public A , public B            // multible inheritance
{
    private :
        int finalGrade ;
    public :
    C (string n , int a , string em , int fg) : A(n , a) , B(em)      // inheritance
    {
        // override function
        finalGrade = fg ;
    }
    void print()
    {
        A ::print() ;               //  override function
        B ::print() ;               //  override function
        cout <<"Your Final Grade Is " << finalGrade << endl;
    }
} ;
int main ()
{      
    /* 
    
    A ob1("salah" , 25 ) ;
    ob1.print() ;

     ===> print //! Your Name Is salah
                ///!  Your Age Is 25

    */
   
    /* 

    B ob2("Salah4355@gmail.com") ; 
    ob2.print() ;
    ====> print  //!  Your Email Is Salah4355@gmail.com

    */
   C ob3 ("salah" , 22 , "salah@gmail.com" , 130) ;
   ob3.print() ;    

    return 0 ;
}