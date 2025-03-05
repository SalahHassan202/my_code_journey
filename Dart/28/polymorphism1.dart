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

  // polymorphism

  List<Animal> zooAnimals = [scar , kitty , jact] ;
   print(zooAnimals) ;
 

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
  

  void roaring()          // يزأر
  {
    print("roaring") ; 
  }
  
}


class Cat extends Animal
{
  
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