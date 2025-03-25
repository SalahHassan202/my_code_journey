#include <iostream>
#include <map>  
using namespace std;

int main()
{
    multimap<string, int> mm;

    mm.insert({"salah", 90});
    mm.insert({"salah", 85});  // مفتاح مكرر مسموح
    mm.insert({"Sara", 78});

    for (auto student : mm)
    {
        cout << student.first << ": " << student.second << endl;
        // Sara: 78
        // salah: 90
        // salah: 85
    }

    return 0;
}
