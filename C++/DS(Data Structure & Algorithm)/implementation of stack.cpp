// implementation of stack
# include <iostream>
# include <string>
// #include <stack>
using namespace std ;
const int size = 50 ;
class stack
{
    private : 
        int top = -1 ;
        int item[size] ;
    
    public :
        stack() : top(-1) {}   // constructor

        // push 
        void push(int element)
        {
            if(top >= size - 1)     // 0 - 49
            {
                cout << "stack is full !" << endl;         // stack is full
            }
            else
            {
                top++ ;       // top = top + 1       // the first element index 0 
                item[top] = element ;
            }
        }

        // pop

        // check if stack is empty or  no 
        bool isEmpty ()
        {
            if(top == -1)
            {
                return true ;        // stack is empty 
            }
            else
            {
                return false ;        // stack is not empty
            }
        }
        void pop()
        {
            if(isEmpty())
            {
                cout << "stack is empty " << endl;
            }
            else
            {
                top-- ;
            }
        }
    // store the element before making pop operation
        void pop(int &element)
        {
            if(isEmpty())
            {
                cout << "stack is empty " << endl;
            }
            else
            {
                element = item[top] ;
                top-- ;
            }
        }

        // get top 
        void getTop(int&stackTop)
        {
            if(isEmpty())
            {
                cout << "stack is empty " << endl;
            }
            else
            {
                stackTop = item[top] ;
                cout << "stack top is : " << stackTop << endl;
            }
        }

        // print elemenet

        void print()
        {
            cout << "[" ;
            for(int i = top ; i >= 0 ; i--)
            {
                cout << item[i] << " " ;
            }
            cout <<"]" ; 
            cout << endl; 
        }

} ;
int main()
{
   
    stack s ; 
    s.push(10) ;
    s.push(20) ;
    s.push(30) ;
    s.push(40) ;
    s.print() ;               // [40 30 20 10 ]

    s.pop() ;                // delete 40 

    s.print() ;            // [30 20 10 ]
    int y = 0 ;
    s.getTop(y) ;            // stack top is : 30

    return  0 ; 
} 