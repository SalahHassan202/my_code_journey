// Recursion ........... 
#include <iostream>
using namespace std;

int get(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return 1+get(n-1);
    }
}


int main()
{
 
 int n =3;
 cout<<get(3)<<endl;    // 3

    return 0 ;
}
