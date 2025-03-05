void main()
{

StudentMaster s1 = StudentMaster() ;
s1.name = "salah" ; 
s1.eat() ; 
s1.workAt = "egypt" ; 

print(s1.name) ; 
print(s1.workAt) ; 


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

  @override 
  void eat()
  {
    print("StudentMaster Can Eat...") ; 
  }
}

