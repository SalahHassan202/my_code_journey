void main()
{
 
  Student s1 = Student() ;
  s1.speak() ;         // student can speek
}

// inheritance 
// parent - super class
abstract class Human
{
  String? name ;
  int? age ; 

  // abstract method 
  void speak() ;
  
}
// Studebt ===>  child - sub class 
class Student extends Human
{
  String? studeyAt ; 

  void speak()
  {
    print("student can speek") ; 
  }

}

