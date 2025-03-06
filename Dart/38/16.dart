void main()
{
 data(name :"salah" , age :20) ;       // my name is salah and my age is 20
 data(age :20 , name :"salah" ) ;       // my name is salah and my age is 20
} 

 // named parametered     ===>      required
 void data ({required String name , required int age})         // named parametered
  {
    print("my name is $name and my age is $age") ; 
  }