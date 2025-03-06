void main()
{
  // oop           ===> object orianted proramming
  // class -- object
  Student s1 = Student() ;
  s1.name = "salah" ;
  s1.age = 20 ; 
  s1.phone = "01024152368" ;
  s1.grade= 80.5 ;

  print(s1.name) ;            // salah
  print(s1.age) ;             // 20
  print(s1.phone) ;           // 01024152368
  print(s1.grade) ;           // 80.5

  // salah
  // 20
  // 01024152368
  // 80.5    
}


class Student
{
  // atributes -- fields -- properites 
  String? name ;               // ==>    ? null safety
  int? age ;                   // ==>    ? null safety
  String? phone ;              // ==>    ? null safety
  double? grade ;              // ==>    ? null safety   

} 