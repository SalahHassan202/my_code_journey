// union
#include <iostream>
using namespace std;
union box
{
    double weight ;
    double height ;
} ;

int main()
{
    box b1 ;
    b1.weight = 20.0 ;
    b1.height = 30.0 ;

    cout << b1.weight << endl;           // 30
    cout <<  b1.height << endl;          // 30


    return 0 ;
}
