#include <iostream>
#include <map>  
using namespace std;

int main()
{

   map <string , int> m ;
   m.insert({"salah" , 20}) ; 
   m.insert({"ali" , 80}) ; 
   m.insert({"asmaa" , 70}) ; 

   for(auto it = m.rbegin() ; it != m.rend() ; it++)
   {
        cout << it->first << " : "  << it->second << " ";             // salah : 20 asmaa : 70 ali : 80 
   }

    return 0;
}
