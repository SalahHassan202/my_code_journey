// function & parameters.... (OPP)
#include <iostream>
# include <string >
#include <algorithm>
#include <cmath>
using namespace std;
class Company
{
    public:
        int id ;
        string name ;
        float salary ;

    // function & parameters
    void save (int i , string n , float sal)
    {
        id = i ; 
        name = n ;
        salary = sal ;
    }

    void display()
    {
        cout<<"id is  "<< id <<endl;
        cout<<"name is  "<< name <<endl;
        cout<<"salary is  "<< salary <<endl;
    }
};

int main ()
{
    Company ob11;
    Company ob22 ;

    ob11.save(1 , "Salah" , 10000.00) ;
    ob11.display() ; 
    cout<<"******************************"<<endl;

    
    ob22.save(2 , "Hassan" , 200000.00) ;
    ob22.display() ; 
    cout<<"******************************"<<endl;



    return 0 ;
}