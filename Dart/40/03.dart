
class Human
{
  int? _numberOfArms ;     // private attribute

  // set a value 

  void setNumberOfArms (int number)
  {
    _numberOfArms = number ;
  }

  // get a value 

  int getNumberOfArms ()
  {
    return _numberOfArms! ;
  }
} 