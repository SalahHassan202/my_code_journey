void main()
{

Human ob1 = Human() ;
ob1.name = 'salah' ;
ob1.age = 22 ;
ob1.weight = 80.0 ; 
ob1.height = 170.0 ; 

print(ob1.name) ; 
print(ob1.age) ; 
print(ob1.weight) ; 
print(ob1.height) ; 

ob1.speek() ;
ob1.run() ;
ob1.study() ;
ob1.eat() ;

print('******************************') ; 

Human ob2 = Human() ;
ob2.name = 'hassan' ;
ob2.age = 20 ;
ob2.weight = 70.0 ; 
ob2.height = 180.0 ; 

print(ob2.name) ; 
print(ob2.age) ; 
print(ob2.weight) ; 
print(ob2.height) ; 

ob2.speek() ;
ob2.run() ;
ob2.study() ;
ob2.eat() ;

}

// class 
class Human
{
  String? name ;
  int? age ;
  double? weight ;
  double? height ; 

  void speek()
  {
    print('human can speek') ; 
  }
  void run()
  {
    print('human can run') ; 
  }
  void study()
  {
    print('human can study') ; 
  }
  void eat()
  {
    print('human can eat') ; 
  }


}