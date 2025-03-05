void main()
{

  // list 
  List <int > nums = [2 , 4 , 8 , 16] ; 
  print(nums) ;               // [2 , 4 , 8 , 16]
  print("************************") ; 
  print(nums[0]) ;         // 2 
  print(nums[1]) ;         // 4
  print(nums[2]) ;         // 8 
  print(nums[3]) ;         // 16 
  print("************************") ; 
  nums[0]++ ;     // nums[0] = nums[0] + 1         
  print(nums[0]) ;            // 3 

  nums[2] = nums[1] + nums[3] ; 
  print(nums[2]) ;          // 20 

  nums[2]-- ;       // nums[2] = nums[2] - 1    
  print(nums[2]) ;     // 19   
   
} 
