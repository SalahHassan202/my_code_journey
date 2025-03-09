//  built in function
#include <iostream>
#include <stdlib.h>
#include<ctime>
#include<cmath>
using namespace std;
int main()
{
    cout<<sin(90)<<endl;
    cout<<cos(180)<<endl;
    cout<<tan(45)<<endl;


    cout<< max(3,5)<<endl;   // 5 ====> maximum 

    cout<< min(3,5)<<endl;   // 5 ====> minimum

    cout<< pow(2,3)<<endl;   // 8 ===> power 

    cout<< sqrt(9)<<endl;    // 3  ===> square root 

    cout<< ceil(5.12)<<endl;  // 6 ===> increase the number 

    cout <<floor(5.89)<<endl;  // 5  ====> decrease the number 

    cout<<fabs(-9)<<endl;      // 9 ===> positive number

    cout<<fmod(3.123 , 2.11)<<endl;  

    // cout<< 3.123% 2.11 <<endl;   // error

    cout<<exp(3)<<endl;    // 2.718 ^3 

    return 0 ;
}
