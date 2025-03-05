void main()
{


Student s2 = Student() ;
s2.department = "Computer and control" ; 
print(s2.department) ; 


s2.studyAt = "Menofi University" ; 
print(s2.studyAt) ; 

s2.gpa = 3.5 ; 
print(s2.gpa) ; 








}

// class
class Human
{
  String? name ;
  void eat()
  {
    print("Human Can Eat...") ; 
  }
}


// class
class MenofiaStudent
{
  String? department ;
  double? gpa ; 
}

// class
// class Student extends Human  , MenofiaStudent        error 
// {
//   String? studyAt ; 
// }

// class 
class Student extends Human  implements MenofiaStudent 
{
  String? studyAt ; 
  String? department ;
  double? gpa ; 
}


