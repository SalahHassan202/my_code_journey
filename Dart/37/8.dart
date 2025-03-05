void main()
{
  // List

  List <int> numbers = [10 , 20 , 30 , 40 , 50 , 60 ] ;
  print(numbers) ;                            // [10 , 20 , 30 , 40 , 50 , 60 ]
  print("*********************") ; 
  print(numbers[0]) ;                                 // 10 
  print(numbers[1]) ;                                 // 20 
  print(numbers[2]) ;                                 // 30 
  print(numbers[3]) ;                                 // 40 
  print(numbers[4]) ;                                 // 50 
  print(numbers[5]) ;   
  print("*********************") ; 
  print(numbers.first) ;                     // 10
  print("*********************") ; 
  print(numbers.last) ;                     // 60
  print("*********************") ; 
  print(numbers.reversed) ;                 // (60, 50, 40, 30, 20, 10)
  print("*********************") ; 
  print(numbers.length) ;                 // 6
  print("*********************") ; 
  numbers.add(70) ; 
  print(numbers) ;                        // [10, 20, 30, 40, 50, 60, 70]
  print("*********************") ;
  List <int> nums = [80 , 90 , 100] ;
  numbers.addAll(nums) ;
  print(numbers) ;                 // [10, 20, 30, 40, 50, 60, 70, 80, 90, 100]
  print("*********************") ; 
  numbers.insert(0 , 1000) ;
  print(numbers) ;                    // [1000, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100]
  print("*********************") ; 
  numbers.remove(1000) ;
  print(numbers) ;      // [10, 20, 30, 40, 50, 60, 70, 80, 90, 100]
  print("*********************") ; 
  numbers.removeAt(2) ;        // remove ===> 30 
  print(numbers) ;               // [10, 20, 40, 50, 60, 70, 80, 90, 100]
  print("*********************") ; 




  



}