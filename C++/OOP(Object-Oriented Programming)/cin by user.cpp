// cin by user.... (OPP)
#include <iostream>
# include <string >
#include <algorithm>
#include <cmath>
using namespace std;

class Company
{
    private :
        int id ;
        string name ;
        float salary ;

    public:
        void save ()
        {
            cout << "Enter Your Id : " << endl;
            cin >> id ;

            cout << "Enter Your Name : " << endl;
            cin >> name ;

            cout << "Enter Your Salary: " << endl;
            cin >> salary ;
        }

        void display()
        {
            cout<<"Your id is  "<< id <<endl;
            cout<<"Your name is  "<< name <<endl;
            cout<<"Your salary is  "<< salary <<endl;
        }
};

int main ()
{               
    Company ob11;
    Company ob22 ;

    ob11.save() ;
    ob11.display() ; 
    cout<<"******************************"<<endl;

    
    ob22.save() ;
    ob22.display() ; 
    cout<<"******************************"<<endl;



    return 0 ;
}