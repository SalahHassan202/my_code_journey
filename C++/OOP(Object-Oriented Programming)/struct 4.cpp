// structure
#include <iostream>
using namespace std;
 
struct Book 
{
    string name ;
    string author ;
    int pages ;
    double price ;

} ;

int main()
{

    Book b[10] ;

    b[0].name = "book0" ; 
    cout << b[0].name << endl;
    b[1].name = "book1" ; 
    cout << b[1].name << endl;
    b[2].name = "book2" ; 
    cout << b[2].name << endl;
    b[3].name = "book3" ; 
    cout << b[3].name << endl;
    b[4].name = "book4" ; 
    cout << b[4].name << endl;
    b[5].name = "book5" ; 
    cout << b[5].name << endl;
    b[6].name = "book6" ; 
    cout << b[6].name << endl;
    b[7].name = "book7" ; 
    cout << b[7].name << endl;
    b[8].name = "book8" ; 
    cout << b[8].name << endl;
    b[9].name = "book9" ; 
    cout << b[9].name << endl;
    
    cout << "*********************************************" << endl;

    b[0].author = "author0" ; 
    cout << b[0].author << endl;
    b[1].author = "author1" ; 
    cout << b[1].author << endl;
    b[2].author = "author2" ; 
    cout << b[2].author << endl;
    b[3].author = "author3" ; 
    cout << b[3].author << endl;
    b[4].author = "author4" ; 
    cout << b[4].author << endl;
    b[5].author = "author5" ; 
    cout << b[5].author << endl;
    b[6].author = "author6" ; 
    cout << b[6].author << endl;
    b[7].author = "author7" ; 
    cout << b[7].author << endl;
    b[8].author = "author8" ; 
    cout << b[8].author << endl;
    b[9].author = "author9" ; 
    cout << b[9].author << endl;
    
    
    cout << "*********************************************" << endl;

    b[0].pages = 100 ; 
    cout << b[0].pages << endl;
    b[1].pages = 200 ; 
    cout << b[1].pages << endl;
    b[2].pages = 300 ; 
    cout << b[2].pages << endl;
    b[3].pages = 400 ; 
    cout << b[3].pages << endl;
    b[4].pages = 500 ; 
    cout << b[4].pages << endl;
    b[5].pages = 600 ; 
    cout << b[5].pages << endl;
    b[6].pages = 700 ; 
    cout << b[6].pages << endl;
    b[7].pages = 800 ; 
    cout << b[7].pages << endl;
    b[8].pages = 900 ; 
    cout << b[8].pages << endl;
    b[9].pages = 1000 ; 
    cout << b[9].pages << endl;
    
    
    cout << "*********************************************" << endl;

    b[0].price = 30.0 ; 
    cout << b[0].price << endl;
    b[1].price = 25.0 ; 
    cout << b[1].price << endl;
    b[2].price = 35.0 ; 
    cout << b[2].price << endl;
    b[3].price = 40.0 ; 
    cout << b[3].price << endl;
    b[4].price = 50.0 ; 
    cout << b[4].price << endl;
    b[5].price = 65.0 ; 
    cout << b[5].price << endl;
    b[6].price = 77.0 ; 
    cout << b[6].price << endl;
    b[7].price = 89.0 ; 
    cout << b[7].price << endl;
    b[8].price = 91.0 ; 
    cout << b[8].price << endl;
    b[9].price = 100.0 ; 
    cout << b[9].price << endl;
    
    
    return 0 ;
}
