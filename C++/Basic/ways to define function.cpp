//  first method to define functions......
#include <iostream>
using namespace std;

int sum ( int x , int y)
{
    return x+y ;    //! cout<< x+y ;
}

int main()
{
   
   cout<<sum(5,6);   //! sum(5,6) ;
    
    return 0;
}

// ***************************************************************************************************************

// seconed method to define functions......
#include <iostream>
using namespace std;

int sum ( int x , int y)  ;   //!  this line named ====>   proto type ;

int main()
{
   
   cout<<sum(5,6);   
    
    return 0;
}

int sum ( int x , int y)
{
    return x+y ;    
}

// ***************************************************************************************************************
