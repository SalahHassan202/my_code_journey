void main()
{
  // oop           ===> object orianted proramming
  // class -- object
  Student s1 = Student(name :"salah" , age : 20 , phone : "01022320147" , grade : 80.5) ;

  s1.display() ;
  // salah
  // 20
  // 01024152368
  // 80.5 



}


class Student
{
  String? name ;               // ==>    ? null safety
  int? age ;                   // ==>    ? null safety
  String? phone ;              // ==>    ? null safety
  double? grade ;              // ==>    ? null safety   

  // constructor
  Student({required this.name , required this.age , required this.phone , required this.grade}) ;
 
  // function to print
  void display()
  {
      print(name) ;            // salah
      print(age) ;             // 20
      print(phone) ;           // 01024152368
      print(grade) ;  
  }
} 