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
class Lion implements Animal                // implements ===>inheritance ===> using override
{
  

  void roaring()          // يزأر
  {
    print("roaring") ; 
  }
  
  @override
  int numberOfLimps = 4;
  
  @override
  eat() {
   
  }
  
  @override
  sleep() {
   
  }
  
  @override
  walk() {
    
  }
  
}


class Cat implements Animal
{
  
  void meo()
  {
    print("meo") ; 
  }
  
  @override
  int numberOfLimps = 4;
  
  @override
  eat() {
   
  }
  
  @override
  sleep() {
    
  }
  
  @override
  walk() {
    
  }

}

class Dog implements Animal
{
  

  void barking ()                   // ينبح
  {
    print("barking") ;     
  }
  
  @override
  int numberOfLimps = 4;
  
  @override
  eat() {
    
    
  }
  
  @override
  sleep() {
   
  }
  
  @override
  walk() {
    
  }

}