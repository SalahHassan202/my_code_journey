void main()
{
  Lion scar = Lion() ;
  Cat kitty = Cat() ;
  Dog jact = Dog() ; 

  scar.eat() ; 
  kitty.eat() ;
  jact.eat() ; 

  print("***************************") ;
  
  scar.roaring() ;
  kitty.meo() ;
  jact.barking();

}
// extends        ===> inheritance 

class Animal
{
  int numberOfLimps = 4 ;       // عدد الاطراف

  eat()
  {
    print("eating") ;
  }

  walk()
  {
    print("walking") ; 
  }

  sleep()
  {
    print("sleeping") ; 
  }
}
// class
class Lion extends Animal
{
  // override 
  @override
  void eat()
  {
    print("lion is eating") ; 
  }
  void roaring()          // يزأر
  {
    print("roaring") ; 
  }
  
}


class Cat extends Animal
{
  // override 
  @override
  void eat()
  {
    print("cat is eating") ; 
  }
  void meo()
  {
    print("meo") ; 
  }

}

class Dog extends Animal
{
  

  void barking ()                   // ينبح
  {
    print("barking") ;     
  }

}