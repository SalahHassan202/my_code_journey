import 'dart:io';

void main()
{
  print("pleae input any number : ") ; 

// stdin.readLineSync()        === > string only      === > to solve this ===> we need to use parse()
  int x = int.parse(stdin.readLineSync()!);

  switch(x)
  {
    case 1:
      print("first") ;
      break ; 
    case 2:
      print("second") ;
      break ; 
    case 3:
      print("third") ;
      break ; 
    default:
      print("invalid") ;
      
  }
}