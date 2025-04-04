//  function & object.... (OPP)
#include <iostream>
# include <string >
#include <algorithm>
#include <cmath>
using namespace std;
class YT
{
    public:
        string name ;

    void print (YT ob)
    {
        cout<<"name is "<< name <<endl;
    }

    void set (YT ob1)
    {
        cout<<"name is "<< ob1.name <<endl;
    }
};

int main ()
{
    YT ob1 ;
    YT ob2 ;
    ob1.name = "I am so proud of you " ;
    ob2.name = "Keep going ";

    ob2.print(ob1);          // Keep going
    ob1.set(ob2);            // Keep going


    return 0 ;
}