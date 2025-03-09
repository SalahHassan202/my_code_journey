// this
#include <iostream>
using namespace std;
 
// this ===> مؤشر بيؤشر علي الاوبجكت الذي استعدي الاقتران 
//  او   هو بويتنر بيستدعي العنوان 

class Student
{
    private:
        int id ;

    public :
        void set_id (int id)
        {
           // id = id ;              // قيمه عشوائيه
           this-> id = id ;         // قيمه صحيحه 
        }
        
        void print_id ()
        {
            cout << "id is :: " << id << endl;
        }
       
        
} ;

int main()
{

    Student st;
    st.set_id(12) ;
    st.print_id() ;
   

    
    return 0 ;
}
