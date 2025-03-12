// pointer
#include <iostream>
using namespace std;

int main()
{
    string names[5] = {"salah " , "hassan" , "ahmed" , "sobhy" , "wael"} ;
    string * ptr = names ;

    cout << "name 1 :: " << *ptr << endl; 
    ptr+=1 ;

    cout << "name 2 :: " << *ptr << endl; 
    ptr+=1 ;

    cout << "name 3 :: " << *ptr << endl; 
    ptr+=1 ;

    cout << "name 4 :: " << *ptr << endl; 
    ptr+=1 ;

    cout << "name 5 :: " << *ptr << endl; 
  

    return 0 ;
}
