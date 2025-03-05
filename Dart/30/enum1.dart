void main()
{
  // String gender = "male" ; 

  Gender gender1 = Gender.female ; 
  switch(gender1)
  {
    case Gender.male :
      print("male") ; 
      break ;

    case Gender.female :
      print("female") ;
      break ; 
  }

} 

// enum

enum Gender 
{
  male , female ; 
}