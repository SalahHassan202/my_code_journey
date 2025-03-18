//  exercise 1   ........   else if 

#include <iostream>
using namespace std;
int main(){
 int number ;
 cout <<"enter an integer number"<<endl;
 cin>>number ;

if (number>0)
{
    cout<< "you entered a positive number"<<endl;
}
else if (number<0)
{
    cout<< "you entered a negative number"<<endl;
}
else
{
    cout << "you entered ZERO "<<endl;
}


return 0;
}


