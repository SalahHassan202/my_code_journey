void main()
{
  Student s1 = Student("salah" , 22 , 3.7) ; 
 
  print(s1.isHonor()) ;         // true 
  print("*************************") ;   

  print(s1.name) ; 
  print(s1.age) ; 
  print(s1.gpa) ; 

  print("*************************") ;   
   

}

// class 

class Student
{
  String? name ;
  int? age ; 
  double? gpa ; 

  // constructor 
  // Student(String name , int age , double gpa)
  // {
  //   this.name = name ; 
  //   this.age = age ;
  //   this.gpa = gpa ; 
  // }

  // constructor

  Student(this.name , this.age , this.gpa) ; 

  // arrow function 

  bool isHonor() => gpa! >=3.5 ; 


}