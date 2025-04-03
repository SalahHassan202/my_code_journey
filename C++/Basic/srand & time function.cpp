//  random functions......
#include <iostream>
#include <stdlib.h>
#include<ctime>
using namespace std;
int main()
{


    srand(time(0));   // time function to change all number in any time 
 for(int i =0 ; i<10 ; i++)
 {

    cout<< rand()<<endl;    //  random function 
 }

    return 0 ;
}
