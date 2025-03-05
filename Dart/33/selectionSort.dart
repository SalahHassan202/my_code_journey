
void main()
{
  print(sortListOfFavSongs([20 , 0 , 100, 50 , 90])) ;         // output is ===>   [100 , 90 , 50 , 20 , 0]
}


// input ==> list    [20 , 0 , 100, 50 , 90]     ====>   output ===> list   [100 , 90 , 50 , 20 , 0]
// input ,  output   =====> list 
// list ===>refr=ere to playing favouite music 

List<int> sortListOfFavSongs(List<int> songs)
{
  // loop 

  for(int i = 0 ; i <songs.length ; i++)
  {
    // to sort the elements       ===> we want to remember swapping 
    // 2 variables     ===> largetNumberIndex     , temp 

    int largestNumberIndex = i ; 
    int temp = songs[i] ; 

    for (int j = i + 1 ; j <songs.length ; j++)
    {
      if(songs[largestNumberIndex] < songs[j])
      {
        largestNumberIndex = j ; 
      }

    }
    // sawping 
    // int x = 5             ;;; int y = 10 ;      
    // want to do swap 
    // we need a temp variables 
    // int temp = x = 5 ;        then       int x = y = 10 ;         then int y = temp ;  
    // after swaping    ===> x = 10  ;;;; y = 5 ; 

    songs[i] = songs[largestNumberIndex] ; 
    songs[largestNumberIndex] = temp ;  
  }

  return songs ; 
}