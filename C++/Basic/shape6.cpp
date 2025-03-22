// shapes.......
#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main()
{
     int y = 1; 
    for(int i =1 ; i<=5 ; i++)            // row 
    {
        for( int j =4 ; j>= i; j--)       // spaces
        {
            cout<<" ";
        }
        for(int z =1 ; z<=y ;z++)        // column 
        {
            cout<<"*";
        }
        cout<<endl;
        y +=2 ;      // y = y +2 ;
    }




   return 0 ;
}


