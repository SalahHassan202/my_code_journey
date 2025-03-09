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

    Book b1 = {"book 1" ,"author 1" , 255 , 210 };
    
    cout << b1.name << endl;
    cout << b1.author << endl;
    cout << b1.pages << endl;
    cout << b1.price << endl;

    
    return 0 ;
}
