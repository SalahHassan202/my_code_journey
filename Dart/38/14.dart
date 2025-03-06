void main()
{
  add(10 , 20) ;                 // 30 
}


// optional paramater

void add(int n1 , int n2 , [int? n3])       // null safety
// void add(int n1 , n2 , [int n3 = 0]) 
{
  print(n1 + n2) ; 
}

// void add( [int? n3] ,int n1 , n2)                    // error
// void add([int n3 = 0] , int n1 , n2  )               // error
// {
//   print(n1 + n2) ; 
// }