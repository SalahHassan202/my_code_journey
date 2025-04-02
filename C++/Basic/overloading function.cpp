// overloading ........... 
#include <iostream>
using namespace std;

void print ()
{
    cout<<"salah"<<endl;
}

void print (int a)
{
    cout<<a<<endl;
}

void print (int a , int b)
{
    cout<<a+b<<endl;
}

int main()
{
 
 // overloading ---------

     print();          // salah
     print(2);         //2
     print(2,4);       //6

    return 0 ;
}
