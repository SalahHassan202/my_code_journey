import 'dart:io' ; 

void main()
{
  stdout.write("enter your age: ") ; 
  int age = int.parse(stdin.readLineSync()!) ; 
  
  // if statement
  if(age <= 12)
  {
    print("you are a child") ; 
  }
  else if(age >= 12 && age<= 40)
  {
    print("you are a youth") ; 
  }
  else 
  {
    print("you are an old") ; 
  }
}