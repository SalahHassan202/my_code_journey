void main()
{
  print(calculateFinalPrice(price : 200 , discount : 12)) ; 

  print(calculateFinalPrice(price : 50 , discount : 5)) ; 

  print(calculateFinalPrice(discount:20 , price :1000)) ; 

  

}

double calculateFinalPrice ({double? price , double? discount} )
{
  //       [ double discount = 0 ])             ===> optional parameter
  
  double finalPrice = price! - price * discount!/100 ; 

  return finalPrice ; 
}