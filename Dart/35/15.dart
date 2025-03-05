import 'dart:io';

void main()
{
  // null safety 

  // ?       === > null safety (?)
  // !       === > null safety (!)

  String? x ; 
  // print(x) ;           // error
  print(x) ;             // null 
  print("***************************") ; 

  x = stdin.readLineSync() ; 
  print(x!.toUpperCase()) ;           

}