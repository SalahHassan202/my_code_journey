// stack
# include <iostream>
# include <string>
#include <stack>
using namespace std ;

bool arePair(char open , char close)
{
    if(open == '(' && close == ')')
    {
        return true ;
    }
    else if (open == '[' && close == ']')
    {
        return true ;
    }
    else if (open == '{' && close == '}')
    {
        return true ;
    }
    else 
    {
        return false ;
    }
}


bool areBalanced(string expersion)
{
    stack <char> s ;

    for(int i = 0 ; i < expersion.length() ; i++)
    {
        if(expersion[i] == '(' || expersion[i] == '[' || expersion[i] == '{' )
        {
            s.push(expersion[i]) ;
        }

        else if (expersion[i] == ')' || expersion[i] == ']' || expersion[i] == '}')
        {
            if(s.empty() || !arePair(s.top() , expersion[i]) )
            {
                return false ;
            }
            else
            {
                s.pop() ;
            }
        }
    }

    if(s.empty())
    {
        return true ;
    }
    else
    {
        return false ;
    }
}


int main()
{
   
   string expersion ;
   cout << "Enter An Expersion : " << endl;
   cin >> expersion ;

   if(areBalanced(expersion))
   {
        cout << "Are Balanced" << endl;
   }
   else
   {
        cout << "Not Balanced" << endl;
   }
   

    return  0 ; 
} 