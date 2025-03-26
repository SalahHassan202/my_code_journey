#include <iostream>
#include <map>  
using namespace std;

int main()
{

   map <string , int> m ;
   m.insert({"salah" , 20}) ; 
   m.insert({"ali" , 80}) ; 
   m.insert({"asmaa" , 70}) ; 

   for(auto it = m.begin() ; it != m.end() ; it++)
   {
        cout << it->first << " : "  << it->second << " ";             // ali : 80    asmaa : 70     salah : 20 
   }

    return 0;
}
