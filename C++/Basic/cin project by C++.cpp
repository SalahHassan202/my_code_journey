// My First Project By C++
//   cin project by C++

#include <iostream>
using namespace std;
int main()
{
    string name = "unkown";
    int age = 0;
    double gpa = 0.0;
    char letter = 'c';
    bool success = true;

    cout << "enter your name\n";
    cin >> name;
    cout << "enter your age\n";
    cin >> age;
    cout << "enter your gpa\n";
    cin >> gpa;
    cout << "enter your letter\n";
    cin >> letter;
    cout << "enter your success\n";
    cin >> success;

    cout << endl
         << endl;

    cout << "********** Your Result is **********" << endl;

    cout << "your name is " << name << endl;
    cout << "your age is " << age << endl;

    cout << "your gpa is " << gpa << endl;
    cout << "your letter is " << letter << endl;
    cout << "if  success = 1 congratulations else never mind ::: " << success << endl;

    return 0;
}