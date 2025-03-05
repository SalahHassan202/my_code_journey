
void main()
{
  // nested if        === >     if   else if   else if   ......... else 

  bool isAdmin = true ; 
  bool isModerator = false ; 

  if(isAdmin)
  {
    print("you are admin...") ; 
  }
  else if (isModerator)
  {
    print("you are moderator...") ; 
  }
  else{
    print("you are user...") ; 
  }

}