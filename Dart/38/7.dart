void main()
{
  for(int i = 0 ; i < 10 ; i++)
  {
    if(i == 5)
    {
      continue ; 
    }
    print(i) ;      // 0 1 2 3 4 6 7 8 9     ===> 5 ===> will not be in the output
  }
}