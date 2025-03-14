void main()
{
  Animal a1 = Animal() ;
  a1.eat() ;              // Animal can eat

  Lion n1 = Lion() ;
  n1.eat() ;              // Lion can eat  
  // polymorphism
  Animal o1 = Lion() ;
  o1.eat() ;              // Lion can eat
} 


class Animal
{
  void eat()
  {
    print("Animal can eat") ;

  }
}

class Lion extends Animal
{
  void eat()
  {
    print("Lion can eat") ;

  }
}
