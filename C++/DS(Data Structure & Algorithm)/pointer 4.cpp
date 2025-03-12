// pointer
#include <iostream>
using namespace std;

int main()
{
   int num1 = 20 ; 
   int num2 = num1 ; 

   cout << "num1 value is :: " << num1 << endl;
   cout << "num2 value is :: " << num2 << endl;

   cout << "***************************" << endl;

   cout << "num1 address is :: " << &num1 << endl;
   cout << "num2 address is :: " << &num2 << endl;

   //  num1 , num2 ===> الاتنين كل واحد فيهم ليه مكان مختلف في الميموري 
   //  num1 address is :: 0x61ff0c
   //  num2 address is :: 0x61ff08

    return 0 ;
}
