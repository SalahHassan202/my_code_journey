// Recursion ........... 
#include <iostream>
using namespace std;

// fact (4)

int fun(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n * fun(n-1);
    }
}
int main()
{
 
int n =4 ;
cout<<"factorial for 4 is = "<<fun(4)<<endl;

    return 0 ;
}
