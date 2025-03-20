//   Neasted for 

#include <iostream>
using namespace std;
int main()
{
    int weak= 4;
    int day =7 ;
    for (int i =1; i<=4;i++)
    {
        cout<< "week :"<< i<<endl;
        

        for (int j=1 ; j<=7 ;j++)
        {
            cout<<"     day"<< j <<endl;
        }
        cout <<endl;
    }

    return 0;
}
