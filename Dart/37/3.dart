void main()
{
  // final , const

  const x = 15 ; 
  print(x) ;        // 15

  // const x ;
  // x = 20 ;          // error 
  // must be in one line like this ====>     const x = 20 ; 

  final y = 20 ;
  print(y) ;      // 20 

  final z ;
  z = 70 ; 
  print(z) ;       // 70 


  // summary of all 
  // const ===> compile time 
  // const ===> must be in a single line ,, (decleration & initialization)
  // final ===> run time 
  // final ===> not nessasery  in a single line (decleration & initialization)
  // (decleration & initialization)    in single line    ===> true
  // (decleration    in single line    ===> and  initialization  in single line ==> true


}