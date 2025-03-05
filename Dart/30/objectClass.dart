void main()
{
  Dog Jack = Dog(50) ; 
  
  List<Object> dogs = [Jack] ; 
  print(dogs) ; 

}

class Animal
{
  int numberOfLimps =4 ; 
}

class Dog extends Animal
{
  int weight ;
  Dog(this.weight) ;      // constructor

}


class Cat extends Animal
{

}

