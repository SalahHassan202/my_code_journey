import 'dart:io';

void main()
{
  stdout.write("Enter a number (1-7): ") ; 
  int day = int.parse(stdin.readLineSync()!) ;
  
  switch(day)
  {
    case 1:
      print("saterday") ; 
      break ; 
    case 2:
      print("sunday") ; 
      break ; 
    case 3:
      print("monday") ; 
      break ; 
    case 4:
      print("tuesday") ; 
      break ; 
    case 5:
      print("wendesday") ; 
      break ; 
    case 6:
      print("thuesday") ; 
      break ; 
    case 7:
      print("friday") ; 
      break ; 
    default:
      print("error! you should write a number between (1 : 7)") ; 
      print("thankyou ❤") ;
  }

  //switch statement

}