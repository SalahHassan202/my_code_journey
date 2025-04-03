//!  build a simple calculator using switch statement

#include <iostream>
using namespace std;
int main(){

char oper ;   // operator

cout << "enter an operator ( + , - , * , / )  : ";
cin >>oper;
float num1 , num2 ;
cout << "enter two number"<<endl;
cin>> num1;
cin>> num2;


switch (oper)
{
    case '+':
        cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
        break;

    case '-':
        cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
        break;
    case '*':
        cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
        break;
    case '/':
        cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
        break;


    default :
    cout<< "ERROR THE OPERATOR ISN'T CORRECT !!!!!"<<endl;



}

return 0;
}