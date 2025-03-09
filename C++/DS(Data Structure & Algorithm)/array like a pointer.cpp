//  array like a pointer
#include <iostream>
using namespace std;
int main()
{
    int x[3]={5,6,9};

    cout<<x[0]<<endl;                      // 5
    cout<<x[1]<<endl;                      // 6
    cout<<x[2]<<endl<<endl;                // 9

    cout<<&x[0]<<endl;                   // 0x61ff04
    cout<<&x[1]<<endl;                   // 0x61ff08
    cout<<&x[2]<<endl<<endl;             // 0x61ff0c

    cout<<x<<endl;                       // 0x61ff04
    cout<<x+1<<endl;                     // 0x61ff08
    cout<<x+2<<endl<<endl;               // 0x61ff0c

    cout<<*x<<endl;                      // 5
    cout<<*x+1<<endl;                    //6
    cout<<*x+2<<endl<<endl;              // 7

    
    return 0;
}