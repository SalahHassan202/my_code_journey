void main()
{
  print(findNumberInList([10 , 20 , 30 , 40 ,70 , 50 , 80 , 100], 70)) ; 

  // [10 , 20 , 30 , 40 ,70 , 50 , 80 , 100]      == > i eant to find 70  ; 
  //  0    1    2    3    4    5    6    7            ====> print 4 
}

// linear Search algorithm

int findNumberInList(List<int> numbers , int searchNumber)
{

  if(numbers.isEmpty)        // []  ==> that is mean no element in the list 
  {
    return -1 ; 
  }


  for(int i =0 ; i < numbers.length ; i++)
  {
    if(searchNumber == numbers[i])
    {
      return i ;            // i ===> index of number 
    }
  }

  return -1 ;                  // that is mean ===> not found the number in the list that you search about it ; 
}