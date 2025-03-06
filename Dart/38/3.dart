void main()
{
  List <int> numbers =[10 , 20 , 30 , 40 , 50] ; 
  int sum = 0 ; 
  for(var item in numbers)
  {
    sum+=item ; 
  }

  print(sum) ;     // 10 + 20 + 30 + 40 + 50  = 150 
}