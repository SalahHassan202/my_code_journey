//  exercise 2 ........   else if 

#include <iostream>
using namespace std;
int main(){
int grade ;
cout<< "enter your grade\n";
cin>> grade ;
if(grade>49 && grade !=0)      //* Neasted IF
{
    if (grade>=50 && grade <=60)
 {
    cout<< "D"<<endl;
 }
else if (grade>=60 && grade <=70)
{
     cout<< "C"<<endl;
}
else if (grade>=70 && grade <=80)
{
     cout<< "B"<<endl;
}
else if (grade>=80 && grade <=90)
{
     cout<< "B+"<<endl;
}
else if (grade>=90 && grade <=100)
{
     cout<< "A"<<endl;
}
else
{
   cout<< "your degree is above 100"<<endl;
}

}
 else 
 {
cout<< "your grade under 50"<<endl;
 }


return 0;
}