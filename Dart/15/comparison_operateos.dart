void main()
{
  // comparison_operateos       ===> >   <   =    >=    <=    !=
  int grade1 = 60 ;
  int grade2 = 85 ; 
  bool isGrade1EqualGrade2 = grade1 == grade2 ;
  print(isGrade1EqualGrade2) ;                  // false
  bool isGrade1SmallerThanGrade2 = grade1 < grade2 ;
  print(isGrade1SmallerThanGrade2) ;                  // true

  bool isGrade1GreaterThanGrade2 = grade1 > grade2 ;
  print(isGrade1GreaterThanGrade2) ;                  // false

  bool isGrade1NotEqualGrade2 = grade1 != grade2 ;
  print(isGrade1NotEqualGrade2) ;                  // True

  bool isGrade1GreaterThanOrWqualGrade2 = grade1 >= grade2 ;
  print(isGrade1GreaterThanOrWqualGrade2) ;                  // false

  bool isGrade1SmallerThanOrEqualGrade2 = grade1 <= grade2 ;
  print(isGrade1SmallerThanOrEqualGrade2) ;                  // True




}