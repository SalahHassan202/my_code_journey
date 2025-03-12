// class .... (OPP)
#include <iostream>
# include <string >
#include <algorithm>
#include <cmath>
using namespace std;

class Student 
{
    // perfer to statr the class ===> by capital case ;           ===> class Car , class Student , class X ,....etc .

public:
    int age ; 
    string name ;
    int grade ;
};

int main ()
{
    
    Student ob1 ;
    Student ob2 ;
    Student ob3 ;


    ob1.age = 20 ;
    ob1.name = "Ahmed" ;
    ob1.grade = 80 ;

    cout<<"ob1 's age " << ob1.age << endl;
    cout<<"ob1 's name " << ob1.name << endl;
    cout<<"ob1 's grade " << ob1.grade << endl;
    cout<< "**********************************"<<endl;


    ob2.age = 25;
    ob2.name = "Hassan" ;
    ob2.grade = 90;

    cout<<"ob2 's age " << ob2.age << endl;
    cout<<"ob2 's name " << ob2.name << endl;
    cout<<"ob2 's grade " << ob2.grade << endl;
    cout<< "**********************************"<<endl;


    ob3.age = 30 ;
    ob3.name = "Salah" ;
    ob3.grade = 100 ;

    cout<<"ob3 's age " << ob3.age << endl;
    cout<<"ob3 's name " << ob3.name << endl;
    cout<<"ob3 's grade " << ob3.grade << endl;
    cout<< "**********************************"<<endl;


    return 0 ;
}