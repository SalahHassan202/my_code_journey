class Human
{
  int _numberOfArms = 2 ;           // private  === > encapsulation 
  double? weight ;
  double? height ;

  // constructor 
  Human(double weight , double height)
  {
    this.weight=weight ;
    this.height = height ; 
  }

  void setNumberOfArms(int _numberOfArms)
  {
    if(_numberOfArms <=2 && _numberOfArms >= 0)
    {
      this._numberOfArms = _numberOfArms ; 
    }
  }

  int getNumberOfArms()
  {
    return this._numberOfArms ; 
  }
}