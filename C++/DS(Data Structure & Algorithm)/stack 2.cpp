// stack
# include <iostream>
#include <stack>
using namespace std ;
int main()
{
    stack <int> nums ;

    // add element in stack by ===> push

    nums.push(20) ;
    nums.push(12) ;
    nums.push(21) ;
    nums.push(95) ;
    nums.push(27) ;
    nums.push(64) ;

    // top element is :: 
    cout << "top element is = [" << nums.top() << "]" << endl;


    return  0 ; 
} 