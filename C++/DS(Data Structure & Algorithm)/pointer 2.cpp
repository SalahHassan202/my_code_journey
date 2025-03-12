// pointer
#include <iostream>
using namespace std;
// pointer ===> متغير بيخزن قيمة لعنوان مكان في الميموري
int main()
{

    int y = 100 ;
    cout << y << endl ;                // 100
    int * ptr = &y ; 
    cout << ptr << endl;               // 0x61ff08
    cout << *ptr << endl;              // 100

    *ptr = 200 ;              // that mean  ===> y = 200 ;

    cout << y << endl;                // 200

    cout << *ptr << endl;            // 200
    
    
    return 0 ;
}
