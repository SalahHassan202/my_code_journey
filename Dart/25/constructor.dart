void main()
{

Human ob1 = Human('salah' , 21 , 80.0 , 185.0) ;
// ob1.name = 'salah' ;
// ob1.age = 22 ;
// ob1.weight = 80.0 ; 
// ob1.height = 170.0 ; 

print(ob1.name) ; 
print(ob1.age) ; 
print(ob1.weight) ; 
print(ob1.height) ; 

print('******************************') ; 


}

// class 
class Human
{
  String? name ;
  int? age ;
  double? weight ;
  double? height ; 

  Human(String name , int age , double weight , double height)        // constructor 
  {
    // this ===> like a pointer that refer to the object 
    this.name = name ;
    this.age = age ;
    this.weight = weight ;
    this.height = height ; 
  }
}