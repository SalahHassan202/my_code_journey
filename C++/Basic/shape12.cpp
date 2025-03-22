// shapes.......
#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main()
{
     for(int i =1 ; i<=10 ; i++)
     {
        for(int j =1 ; j<=10 ; j++)
        {
            if (i ==1 || i ==10 ||  j ==1 || j ==10 ||  j==i || j ==11-i )
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }

        }
        cout<<endl;
     }       

    
   return 0 ;
}


