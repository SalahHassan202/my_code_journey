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
    Book b1 ;

    cout << "enter the book name :: " << endl;
    cin >> b1.name ;
    cout << "enter the book author :: " << endl;
    cin >> b1.author ;
    cout << "enter the book pages :: " << endl;
    cin >> b1.pages ;
    cout << "enter the book price :: " << endl;
    cin >> b1.price ;
    
    
    cout << b1.name << endl;
    cout << b1.author << endl;
    cout << b1.pages << endl;
    cout << b1.price << endl;

    
    return 0 ;
}
