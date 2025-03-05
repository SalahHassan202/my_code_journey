import 'dart:io' ;    // to get value from user


void main()
{
  print("Enter Your Name: ") ; 
  String? name = stdin.readLineSync() ;        // ?   null safety
  // String name = stdin.readLineSync()! ;        // ?   null safety
  print("Enter Your Age: ") ; 
  int age = int.parse(stdin.readLineSync()!) ;


  print("my name is $name") ; 

  print("Your age is $age") ;
}