// pointer
#include <iostream>
using namespace std;
// pointer ===> متغير بيخزن قيمة لعنوان مكان في الميموري
int main()
{

    int * ptr = new int(20)       ; 
// كدا انا عملت بوينتر بيشاور علي قيمه 20 ولكن من دون ما اسمي متغير واعطيه قيمه ال 20===> ف عشان كدا بيوفر معايا مساحه ف الميموري
    
    cout << *ptr << endl;             // 20 
    cout << ptr << endl;              // 0x801850


    return 0 ;
}
