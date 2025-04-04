// hierarchical inheritance...... (OPP)
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

class Student : public Person
{
    private :
        int grade ;
    public :
    Student(string n , int a , int g) : Person(n , a)
    {
        grade = g ;
    }
    void print()
    {
        cout << "Your grade is " << grade << endl;
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

int main ()
{      
   Person ob1("salah" , 20) ;
   ob1.print() ;
   cout <<"************************" << endl;

   Student ob2("ahmed" , 23 ,100) ;
   ob2.print() ;
   cout <<"************************" << endl;

   Employee ob3("hassan" , 20 , 1234 , 5000);
   ob3.print() ;
   cout <<"************************" << endl;

    return 0 ;
}