void main()
{
  // mian function scope 
int age = 15 ; 
  if(true)
  {
    // if statement scope 
    int age = 16 ; 
    print(age) ;      // 16 
  }
  print (age) ;           // 15 

  if(true)
  {
    print (age) ;             // 15 
  }

  print(age)   ;            // 15 
}          // end of main function scope