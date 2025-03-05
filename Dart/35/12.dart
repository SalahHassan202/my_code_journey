import 'dart:io';

void main()
{
  String myName = 'salah' ; 
  String guess = " " ; 

  while(myName != guess)
  {
    print("Guess another name : ") ; 
    guess = stdin.readLineSync()! ; 
  }
}