// puplic .... (opp)
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
        
} ;


int main ()
{
    
    Book book1 ;
    
    book1.title = "C++ Level 1" ;
    book1.author = "Salah Hassan";
    book1.price = 1000 ;
    

    cout<<"Book1 title" << " "<<book1.title << endl;
    cout<<"Book1 author" << " "<<book1.author << endl;
    cout<<"Book1 price" << " "<<book1.price << endl;


    return 0 ;
}