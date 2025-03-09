// call by value
#include <iostream>
using namespace std;

void set (int a )
{
    a =0 ;
    cout<<"in set function a = "<<a<<endl;     // 0 
}

int main()
{
 int a =10; 
 cout<<"before calling set function a = "<<a <<endl;  // 10 
set (a);
cout<<"after calling set function a = "<<a <<endl; // 10 

    return 0 ;
}
