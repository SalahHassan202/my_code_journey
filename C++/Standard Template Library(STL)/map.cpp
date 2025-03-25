#include <iostream>
#include <map>  
using namespace std;

int main() {
    map<string, int> students;

    students["salah"] = 90;
    students["yara"] = 85;
    students["Omar"] = 78;

    
    for (auto student : students)
    {
        cout << student.first << ": " << student.second << endl;
    }

    students.erase("yara");  // حذف مفتاح

    cout <<"***************************" << endl;
    for (auto student : students)
    {
        cout << student.first << ": " << student.second << endl;
    }

    return 0;
}
