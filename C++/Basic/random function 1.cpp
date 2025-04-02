//  random functions......
#include <iostream>
#include <stdlib.h>
#include<ctime>
using namespace std;
int main()
{

 // print the numbers between  20:30 

 srand(time(0));
 for(int i =0 ; i<=10 ; i++)
 {
    cout<<20+rand() % (30-20+1)<<endl;
 }

  //! start +rand()% (end -start +1)  =======>     to get all number between two number 

    return 0 ;
}
