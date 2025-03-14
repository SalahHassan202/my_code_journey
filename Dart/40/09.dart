void main()
{
  Human h1 = Human() ;
  h1.speak() ;         // Human can spee
  Student s1 = Student() ;
  s1.speak() ;         // student can speek
}

// inheritance 
// parent - super class
class Human
{
  String? name ;
  int? age ; 

  // method 
  void speak()
  {
    print("Human can speek") ; 
  }
}
// Studebt ===>  child - sub class 
class Student extends Human
{
  String? studeyAt ; 
  @override
  void speak()
  {
    print("student can speek") ; 
  }

}

