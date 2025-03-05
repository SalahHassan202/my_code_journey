void main()
{
  int result = sum(50, 10) ;           // 50 , 10            ====> called arguments
  print(result) ;       // 60
}

int sum(int num1 , int num2)          // num1 , num2        ===> called parameters ;
{
  int result = num1 + num2 ; 

  // return
  return result ;             // change data type of function from void to int to make a return value 
}

