import 'dart:io';

void main()
{
  List <String> names = ['salah' , 'ahmed' , 'hassan'] ; 

  

  // print(names[5]) ;         // exception error
  // RangeError (index): Invalid value: Not in inclusive range 0..2: 5

  // we try to handle this error by              ===> try and catch 


  try
  {
    print(names[5]) ;
  }
  on HttpException
  {
    print("error") ; 
  }
  on RangeError      // e ====> exception
  {
    print("sorry there is an error") ; 
  }
}