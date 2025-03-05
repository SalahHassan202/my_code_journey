void main()
{
  Lion scar = Lion(skinColor: 'yellow' , weight: 80.0) ;


  scar.eat() ; 


  print("***************************") ;
  
  scar.roaring() ;
 

}
// extends        ===> inheritance 

class Animal
{
  int numberOfLimps = 4 ;       // عدد الاطراف

  String skinColor ;
  double weight ; 

  // constructor
  Animal({required this.skinColor ,required  this.weight}) ; 
  
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
  
// super constructor
Lion({required super.skinColor ,required  super.weight}) ; 

// super constructor
// Lion({required String skinColor ,required  double weight}) : super(skinColor: 'yellow' , weight: 80.0); 


  void roaring()          // يزأر
  {
    print("roaring") ; 
  }
  
}

