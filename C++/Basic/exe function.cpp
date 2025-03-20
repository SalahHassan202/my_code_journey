//  functions......
#include <iostream>
using namespace std;

// find maxmium between three number with function .......

int max (int  n1 ,int  n2 ,int  n3 )
{
    if (n1>n2 && n1>n3)
    {
        cout<<"The Maxmium is "<< n1<<endl;
    }
    else if ( n2>n1 && n2>n3)
    {
        cout<<"The Maxmium is "<< n2<<endl;
    }
    else
    {
        cout<<"The Maxmium is "<< n3<<endl;
    }

}

int main()
{
   int x ,y,z ;
   cout<<"Enter Three Number : "<<endl;
   cin>>x;
   cin>>y;
   cin>>z;

    max(x,y,z) ;
   
    
    return 0;
}