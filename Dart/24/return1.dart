void main()
{
  int result = sum() ;
  int num3 = result + 20 ; 
  print(num3) ;                  // 50 
}

int sum()
{
  int num1 = 10 ; 
  int num2 = 20 ;

  int result = num1 + num2 ;

  // return
  return result ;             // change data type of function from void to int to make a return value 
}
