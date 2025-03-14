void main()
{
  Human salah = Human() ;
  salah.eat() ;              // Human Can Eat

  Student s1 = Student() ;
  s1.name = "salah" ; 
  print(s1.name) ; 
}

// inheritance 
// parent - super class
class Human
{
  String? name ;
  int? age ; 

  // method 
  void eat()
  {
    print("Human Can Eat") ;
  }
}
// Studebt ===>  child - sub class 
class Student extends Human
{
  String? studeyAt ; 
}

//Master ===> child - sub class
class Master extends Student
{
  String? workAt ; 
}