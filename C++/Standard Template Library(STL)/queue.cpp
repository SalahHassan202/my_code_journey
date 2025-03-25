#include <iostream>
#include <queue>  
using namespace std;

int main()
{
   queue < int > q ; 
   q.push(10) ; 
   q.push(20) ; 
   q.push(30) ; 
   q.push(40) ; 

   cout << q.front() << endl;       // 10 
   cout << q.size() << endl;       // 4 

   q.pop() ; 
   cout << q.size() << endl ;    // 3 

   q.push(50) ; 
   
   cout << q.size() << endl ;    // 4

    return 0;
}
