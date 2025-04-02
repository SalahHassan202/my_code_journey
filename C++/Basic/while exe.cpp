/*
********** while exercise **********
program to find the sum of positive numbers
if the user enter a negative number , the loops ends 
the negative number is not added on the sum
*/

#include <iostream>
using namespace std;
int main()
{
  
  int number;
  int sum =0;
  cout << "enter a number"<<endl;
  cin>>number;

  while(number>=0)
  {
    sum =sum +number;

    cout<< "enter a number"<<endl;
    cin>> number;


  }

cout<< "the sum is equal "<< sum << endl;
    return 0;
}
