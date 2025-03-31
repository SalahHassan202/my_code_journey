// pointer
#include <iostream>
using namespace std;

int main()
{
    int num1 = 10 ;
    int *ptr = &num1 ;

    cout << num1 << endl;           // 10
    cout << &num1 << endl;          // 0x61ff0c
    cout << ptr << endl;            // 0x61ff0c
    cout << *ptr << endl;           // 10
    cout << &ptr << endl;           // 0x61ff08
  

    return 0 ;
}
