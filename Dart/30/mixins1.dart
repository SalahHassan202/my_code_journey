void main()
{

  Dog jack = Dog() ;
  jack.walk() ; 

  Cat kitty = Cat() ;
  kitty.walk() ;

}

// class 
class Animal
{
  int numberOfLimps = 4 ;

}
 
// Mammals ===> ثديات
// Reptiles ===>زواحف 


mixin MammalsMixin
{
  walk()
  {

  }
}

mixin ReptilesMixin
{
  crawl()
  {

  }
}
mixin petMixin
{
  play()
  {

  }
}


// inheritance
class Dog extends Animal with MammalsMixin
{
  walk()
  {

  }
}

class Cat extends Animal with MammalsMixin , petMixin
{
  walk()
  {
    
  }

}

class Snake extends Animal with ReptilesMixin
{
  crawl()
  {

  }
}