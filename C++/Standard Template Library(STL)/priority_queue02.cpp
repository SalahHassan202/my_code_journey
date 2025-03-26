#include <iostream>
#include <queue>  
using namespace std;

int main()
{
  priority_queue<int , vector<int> , greater<int>> pq ;     // الاولوله الاصغر 
  pq.push(20) ; 
  pq.push(30) ; 
  pq.push(50) ; 

  cout << pq.top() << endl;       // 20 
  pq.pop() ;            // delete 20
  cout << pq.top() << endl;       // 30 
  pq.push(70) ; 
  pq.push(90) ; 
  cout << pq.size() << endl;       // 4

    return 0;
}
