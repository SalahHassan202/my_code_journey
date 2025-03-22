// shapes.......
#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main()
{
     int y =9; 
    for(int i =1 ; i<= 5 ; i++)            // row 
    {
        for(int z =1 ; z<=y ;z++)        // column 
        {
            cout<<"*";
        }

        cout<<endl;
        y -=2 ;      // y = y -2 ;

        for( int j =0 ; j< i; j++)       // spaces
        {
            cout<<" ";
        }
    }




   return 0 ;
}


