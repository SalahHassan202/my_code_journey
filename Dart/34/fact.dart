// void main()
// {
//   print(factorial(3)) ;     // 6
//   print(factorial(4)) ;     // 24
//   print(factorial(5)) ;     // 120
// }


// factorial by two ways 
// first way ===> loops       ===> for loop 

// int factorial(int number)
// {
//   int result = 1 ;         // result = 0 ===> all answer = 0 ;
//   for(int i = number ; i> 0 ; i--)
//   {
//     result = result * i ; 
//   }

//   return result ; 
// }

void main()
{
  print(factorial(3)) ;     // 6
  print(factorial(4)) ;     // 24
  print(factorial(5)) ;     // 120
}

// second way is a recursion 

int factorial(int number)
{

  // base condition 
  if(number == 1)
  {
    return 1 ; 
  }


  // recursion case 
  return number *factorial(number - 1 ) ; 

  // factorial of 3    ===> 3 * 2 * 1 
  // fact(3) = 3 * fact(2) ; 
  // fact(2) = 2 * fact(1) ; 
  // fact(1) = 1 ; 

  // 3 * fact(2) ;   ===> 3 * 2 * fact(1) ;         ===> 3 * 2 * 1 = 6 

  // fact(3) == 6         ;;;;         fact(4) == 24       ;;;;        fact(5) == 120       ;;;;; and so on

}