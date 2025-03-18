//  exercise 3 ........   else if 

#include <iostream>
using namespace std;
int main(){
int number ;
cout<< "enter an integer number"<<endl;
cin>> number;
if (number!=0)
{
    if (number%2==0)        //! Neasted if
{
    cout <<number <<"is even"<<endl;
}
else
{
     cout <<number <<"is odd"<<endl;
}
}
else 
{
cout<< number << "is zero"<<endl;
}

return 0;
}