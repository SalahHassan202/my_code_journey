
class Human
{
  int? _numberOfArms ;     // private attribute

  // set a value 

  void setNumberOfArms (int number)
  {
    if(number < 0 || number > 2)
    {
      _numberOfArms = 2 ;
    }
    else
    {
      _numberOfArms = number;
 
    }
  }

  // get a value 

  int getNumberOfArms ()
  {
    return _numberOfArms! ;
  }
} 