// static variable
#include <iostream>
#include<algorithm>
using namespace std;

void fun ()
{
    static int x =0 ;     // static variable is common for all 
    x++;
    cout<< x <<endl; 
}
int main()
{

    fun();   // 1     when use static ====> static int x =0 ;    // output =1
    fun();   // 1     when use static ====> static int x =0 ;    // output =2
    fun();    // 1    when use static ====> static int x =0 ;   // output =3



    return 0 ;
}


