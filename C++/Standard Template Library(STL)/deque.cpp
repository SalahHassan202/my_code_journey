#include <iostream>
#include <deque>                // deque

using namespace std ; 
int main()
{
    deque<int> dq ;
    dq.push_back(10) ;       // اضافة من الخلف
    dq.push_back(20) ;       // اضافة من الخلف
    dq.push_front(5) ;       // اضافة من الامام
    dq.push_back(30) ;       // اضافة من الخلف

    dq.pop_front() ; 

    for(int num : dq)
    {
        cout << num << " " ;      // 10 20 30
    }
    
    return 0 ;
}