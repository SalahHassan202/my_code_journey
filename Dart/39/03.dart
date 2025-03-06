void main()
{
  // oop           ===> object orianted proramming
  // class -- object
  Student s1 = Student() ;
  s1.name = "salah" ;
  s1.age = 20 ; 
  s1.phone = "01024152368" ;
  s1.grade= 80.5 ;

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

  // function to print
  void display()
  {
      print(name) ;            // salah
      print(age) ;             // 20
      print(phone) ;           // 01024152368
      print(grade) ;  
  }
} 