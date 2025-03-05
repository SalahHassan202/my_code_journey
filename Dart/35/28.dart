void main()
{

StudentMaster s1 = StudentMaster() ;
s1.name = "salah" ; 
s1.eat() ; 
s1.workAt = "egypt" ; 

print(s1.name) ; 
print(s1.workAt) ; 

print("***************************") ; 

Student s2 = Student() ;
s2.name = "salah" ; 
s2.eat() ; 
s2.studyAt = "qena" ; 

print(s2.name) ; 
print(s2.studyAt) ; 


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
class Student extends Human
{
  String? studyAt ; 
}

// class
class StudentMaster extends Human
{
  String? workAt ; 
}

