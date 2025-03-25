#include <iostream>
#include <set>  
using namespace std;

int main()
{
    multiset<int> ms;

    ms.insert(10);
    ms.insert(20);
    ms.insert(30);
    ms.insert(40);
    ms.insert(10);      // يتم إدراجه لأنه مسموح بالتكرار

    
    for (int num : ms)
    {
        cout << num << " ";        // 10 10 20 30 40 
    }

    return 0;
}
