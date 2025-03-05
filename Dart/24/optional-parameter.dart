void main()
{
  print(calculateFinalPrice(20 , 2)) ; 

  print(calculateFinalPrice(500 , 17.5)) ; 

  print(calculateFinalPrice(200 , 10)) ; 

  print(calculateFinalPrice(400 , 20)) ; 

  print(calculateFinalPrice(400 )) ;              // error   ===> to solve this error we need to optinol parameter 



}

double calculateFinalPrice (double price ,[ double discount = 0 ])
{
  //       [ double discount = 0 ])             ===> optional parameter
  double finalPrice = price - price*discount/100 ; 

  return finalPrice ; 
}