// call by reference
#include <iostream>
using namespace std;

void set (int *a )    //!  int *a =====> pointer    &&   int a =====>  variabel
{
    *a =0 ;
    cout<<"in set function a = "<<*a<<endl;     // 0 
}

int main()
{
 int a =10; 
 cout<<"before calling set function a = "<<a <<endl;  // 10 
set (&a);
cout<<"after calling set function a = "<<a <<endl; // 0

    return 0 ;
}


/**
  int a =10 ;
  cout<<a<<endl;   // 10 
  int *z =&a ;      //!  pointer 
  cout<<z<<endl;    // x093983989192838
  cout<<*z<<endl;   // 10



*/