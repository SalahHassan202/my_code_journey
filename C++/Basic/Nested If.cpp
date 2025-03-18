//  Neasted if

#include <iostream>
using namespace std;
int main(){
int a =100 ;
int b =200 ;

if (a==100)
{
    if (b=200)      //! Neasted if 
    {
        cout<<"value of a is 100 and b is 200"<<endl;
    }
    else if (b==100)
    {
        cout<< "hi salah"<<endl;
    }
    else 
    {
        cout<< "thank you"<<endl;
    }

}

return 0;
}