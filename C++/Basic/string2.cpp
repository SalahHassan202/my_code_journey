// function built in using string .....
#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main()
{

    string x ="salah" , y ="7657" ;
    cout<<x.at(0)<<endl;  //s
    cout<<x.at(1)<<endl;  //a
    cout<<x.at(2)<<endl;  //l 
    cout<<x.at(3)<<endl;  //a
    cout<<x.at(4)<<endl;  //h

    cout<<"=============================="<<endl;

    cout<<x.length()<<endl;   // 5

    cout<<x.size()<<endl;     // 5

     cout<<"=============================="<<endl;

    cout<<x.substr(1,4)<<endl; // alah
    cout<<x.substr(0)<<endl;   // salah 

    cout<<"=============================="<<endl;

    x.swap(y);
    cout<<x<<endl;
    
    cout<<"=============================="<<endl;

    cout<<x.find(a)<<endl;
    cout<<x.rfind(a)<<endl;      // find from right to left 

    cout<<"=============================="<<endl;

    cout<<x.erase(0,2)<<endl;   //ah
    cout<<x.erase(2)<<endl;     //sa

    cout<<"=============================="<<endl;

    cout<<x.replace(1,3,"ali")<<endl;   //salih

    cout<<"=============================="<<endl;

    cout<<x.insert(5 , "hassan" )<<endl;   // salah hassan 
    
    cout<<"=============================="<<endl;


    return 0 ;
}


