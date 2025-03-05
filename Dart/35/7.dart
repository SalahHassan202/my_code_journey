import 'dart:io';
void main()
{

  print("welcome to small calculator") ; 
  print("***************************") ; 

  print("enter First number : ") ; 
  String? x = stdin.readLineSync() ;    // error ===> because NULL SAFETY   ===> put ?

  print("enter Second number : ") ; 
  String? y = stdin.readLineSync() ;      // error ===> because NULL SAFETY   ===> put ?

  print(int.parse(x!)+int.parse(y!)) ;                              // error ===> because NULL SAFETY   ===> put !

 // print(x!+y!) ;         ===> first number is 5    second number is 10      output is 510    ===>beacuse parsing
// print(int.parse(x!)+int.parse(y!)) ;       ===> first number is 5    second number is 10      output is 15    ===>beacuse parsing


}