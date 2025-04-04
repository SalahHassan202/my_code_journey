// multilevel inheritance...... (OPP)
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

*******************************************************

hierarchical inheritance
class A
class B : class A 
class C : class A
class D : class A

*******************************************************

multilevel inheritance
class A
class B : class A 
class C : class B
class D : class C

*******************************************************

*/

class Person
{
    private :
        string name ;
        int age ;
    public :
    Person(string n , int a )
    {
        name = n ;
        age = a ;
    }
    void print()
    {
        cout << "Your name is " << name << endl;
        cout << "Your age is " << age << endl;
    }
} ;

class Employee : public Person
{
    private :
        int id ;
        int salary ;
    public :
    Employee(string n , int a , int i , int sal) : Person(n , a)
    {
        id = i ;
        salary = sal ;
    }
    void print()
    {
        cout << "Your id is " << id  << endl;
        cout << "Your salary is " << salary << endl;
    }
} ;

class Student : public Employee
{
    private :
        string email;
    public :
    Student(string n , int a , int i , int sal , string em) : Employee(n , a , i ,sal)
    {
       email = em ;
    }
    void print()
    {
        Person :: print() ;              // override function 
        Employee :: print() ;            // override function 
        cout << "Your email is " << email << endl;
    }
} ;

int main ()
{      
    Student ob1("salah" , 20 , 1234 , 8000 , "salah324@gmail.com") ;
    ob1.print() ;  //! Your email is salah324@gmail.com

    /*
    Person :: print() ;              // override function 
    Employee :: print() ;            // override function 
    ***************************************************************
    ob1.print() ; 
    ***************************************************************
    Your name is salah
    Your age is 20
    Your id is 1234
    Your salary is 8000
    Your email is salah324@gmail.com
        
    
    */

    return 0 ;
}