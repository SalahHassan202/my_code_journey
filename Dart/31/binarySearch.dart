void main()
{
  print(findNumberInList([22 , 14 , 10 , 7 , 5 , 1 , 0], 1)) ; 

  // [22 , 14 , 10 , 7 , 5 , 1 , 0] 
  //  0     1     2   3   4   5   6
  // start = 22 , end = 0   ;            mid =  (0 + 6) / 2  == 3 
  // mid = 3  ===> (index)       ;           === > mid ==> = 7 (element)

  // compare 7 by 1     ===> 7 != 1      ===> i will search in the right side 
  //    if(searchNumber < numbers[mid])
  //     {
  //       start = mid + 1 ; 
  //     }
  //
  // make  start = mid + 1    ===> start = 4 (index )       ===> value == 5       ,,   end = 1 
  // mid = (3 + 6) / 2 == 9/ 2   ===> 4          ===> element as a mid = 5 ; 
  // compare agin   5 by 1      ===> 5 != 1    ;  
  //    if(searchNumber < numbers[mid])
  //     {
  //       start = mid + 1 ; 
  //     }
  // then make a start = mid + 1       ===> 5  ;       end = 6      ; mid = (6 + 5 ) / 2 ===> 5 
  // mid value = 1 ; 
  // compare 1 by 1 
  // trur                 ===> return 5 ; 

 
 }

// binary Search Algorithm 

int findNumberInList(List<int> numbers , int searchNumber)
{

  if(numbers.isEmpty)        // []  ==> that is mean no element in the list 
  {
    return -1 ; 
  }

  int start = 0 ; 
  int end = numbers.length -1 ; 

  // loop stops at ===> start > end   
 while(start < end )        // loop True 
 {
    int mid = (start + end) ~/ 2 ;        // middle         ====> error   === > to fix error ===> we want to but ~/

    if(searchNumber == numbers[mid])
    {
      return mid ;
    }

    if(searchNumber < numbers[mid])
    {
      start = mid + 1 ; 
    }
    else
    {
      end = mid - 1 ; 
    }
 }

  return -1 ;                  // that is mean ===> not found the number in the list that you search about it ; 
}