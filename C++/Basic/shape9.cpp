// shapes.......
#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main()
{
     for(int i =1 ; i<=5 ; i++)
     {
        for(int j =1 ; j<=5 ; j++)
        {
            if (i ==j  || j ==6 -i)
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


