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


  
  // void setNumberOfArms(int _numberOfArms)
  // {
  //   if(_numberOfArms <=2 && _numberOfArms >= 0)
  //   {
  //     this._numberOfArms = _numberOfArms ; 
  //   }
  // }

  // int getNumberOfArms()
  // {
  //   return this._numberOfArms ; 
  // }


  // setter && getter

  // setter 
  set numberOfArms(int _numberOfArms)
  {
    if(_numberOfArms <=2 && _numberOfArms >= 0)
    {
      this._numberOfArms = _numberOfArms ; 
    }
  }


  // getter

  int get numberOfArms => this._numberOfArms ;           // getter


  // Arrow function   ===> like a Getter

  int getNumberOfArms() =>  this._numberOfArms ;          // no return      ===> arrow function



}