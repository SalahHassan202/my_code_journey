// class .... (OPP)
#include <iostream>
# include <string >
#include <algorithm>
#include <cmath>
using namespace std;

class Book
{
    public:
        string title ;
        string author ;
        int price ;
        int pages ;
} ;


int main ()
{
    
    Book book1 ;
    Book book2 ; 

    book1.title = "C++ Level 1" ;
    book1.author = "Salah Hassan";
    book1.price = 1000 ;
    book1.pages = 200 ;

    cout<<"Book1 title" << " "<<book1.title << endl;
    cout<<"Book1 author" << " "<<book1.author << endl;
    cout<<"Book1 price" << " "<<book1.price << endl;
    cout<<"Book1 pages" << " "<<book1.pages << endl;

    cout<< "**************************"<<endl;

    book2.title = "C++ Level 2" ;
    book2.author = "Ahmed Sabry";
    book2.price = 1500 ;
    book2.pages = 300 ;

    cout<<"Book2 title" << " "<<book2.title << endl;
    cout<<"Book2 author" << " "<<book2.author << endl;
    cout<<"Book2 price" << " "<<book2.price << endl;
    cout<<"Book2 pages" << " "<<book2.pages << endl;

    cout<< "**************************"<<endl;




    return 0 ;
}