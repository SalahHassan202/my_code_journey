#include <iostream>
#include <set> // set

using namespace std;
int main()
{
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(10); // مش هيتكرر لانه موجود مره قبل كدا
    s.insert(40);

    for (int num : s)
    {
        cout << num << " ";       // 10 20 30 40 
    }

    cout << endl;

    if (s.count(10))
    {
        cout << "YES" << endl;         // YES
    }
    else
    {
        cout << "NO" << endl;
    }

    s.erase(40);

    for (int num : s)
    {
        cout << num << " ";          // 10 20 30 
    }

    return 0;
}