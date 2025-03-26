#include <iostream>
#include <set>  
using namespace std;

int main()
{

   set <int> s = {10 , 20 , 30 , 10 } ; 
   for(auto it = s.begin() ; it != s.end() ; it++)
   {
        cout << *it << " " ;             // 10   20   30 
   }

    return 0;
}
