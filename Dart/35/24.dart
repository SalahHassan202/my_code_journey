void main()
{
  Student s1 = Student() ; 
  s1.name = "salah" ;
  s1.age = 25 ; 
  s1.gpa = 3.1 ; 
  
  print(s1.name) ; 
  print(s1.age) ; 
  print(s1.gpa) ; 

  print("*************************") ;   

  Student s2 = Student() ; 
  s2.name = "hassan" ;
  s2.age = 20 ; 
  s2.gpa = 3.8 ; 
  
  print(s2.name) ; 
  print(s2.age) ; 
  print(s2.gpa) ; 

  print("*************************") ;     

}

// class 

class Student
{
  String? name ;
  int? age ; 
  double? gpa ; 
}