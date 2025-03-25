#include <iostream>
#include <stack>                // stack

using namespace std ; 
int main()
{
    stack <int> s ; 
    s.push(10) ; 
    s.push(20) ; 
    s.push(30) ; 
    s.push(40) ; 
    s.push(50) ; 

    cout << s.top() << endl;         // 50 
    s.pop() ;          // delete 50

    cout << s.top() << endl ;     // 40
    s.pop() ;          // delete 40
    cout << s.top() << endl ;     // 30

    cout<< s.size() << endl;  /// 3 


    
    return 0 ;
}