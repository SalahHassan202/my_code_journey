// shapes.......
#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main()
{
     // triangle
    for(int i =5 ; i>=1 ; i--)            // row 
    {
        for( int j =4 ; j>= i; j--)       // spaces
        {
            cout<<" ";
        }
        for(int z =1 ; z<=i ;z++)        // column 
        {
            cout<<"*";
        }
        cout<<endl;
    }




   return 0 ;
}


