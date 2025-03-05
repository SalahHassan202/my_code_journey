void main()
{
  printNums(x : 7 , y : 9) ;              // 7        9 
  print("**********************") ; 
  printNums(y : 7 , x : 9) ;              // 7        9 

}

void printNums({int? x  , int? y}) 
{
  print(x) ; 
  print(y) ; 
}
