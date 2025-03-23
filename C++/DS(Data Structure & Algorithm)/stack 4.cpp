// stack
# include <iostream>
#include <stack>
using namespace std ;
int main()
{
   /*
   
    Operation              	Description
    push()	                adds an element into the stack
    pop()	                removes an element from the stack
    top()	                returns the element at the top of the stack
    size()	                returns the number of elements in the stack
    empty()	                returns true if the stack is empty
   
   
   */

    stack <string > colors ;
    // add element in stack 
    colors.push("Red");
    colors.push("Orange");
    colors.push("yellow");
    colors.push("black");
    cout << "top elemnt is : " << colors.top() << endl;   // black 

    // to find size of stack ;
    cout << "size of stack is : " << colors.size() << endl;              // 1

    cout << "***********************************" << endl;

    // to delete element in stack ===> use pop()
    colors.pop() ;
    cout << "top elemnt is : " << colors.top() << endl;      // yellow

    colors.pop() ;
    cout << "top elemnt is : " << colors.top() << endl;      // orange
    colors.pop() ;
    cout << "top elemnt is : " << colors.top() << endl;      // red

    cout << "***********************************" << endl;
    // to find size of stack ;
    cout << "size of stack is : " << colors.size() << endl;              // 1

    return  0 ; 
} 