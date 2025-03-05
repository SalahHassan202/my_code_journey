void main()
{
  // draw a circle

  Circle circle1 =  Circle(redius : 5 , x : 4 , y : 2) ;
  circle1.draw() ;
 
  // named constructor
  Circle circle2 =  Circle.orgin(redius : 8) ;
  circle2.draw() ;

}

// class 
class Circle
{
  double redius ;
  late int x ; 
  late int y ; 

  //constructor
  Circle({required this.redius , required this.x , required this.y}) ; 

  // draw
  draw()
  {
    print("draw this circle at redius = $redius , and x = $x , y= $y") ; 
  }

  // named class 
  // circle ===> origin == x =0 , y = 0 ; 

  Circle.orgin({required this.redius})
  {
    x = 0 ;
    y = 0 ; 
  }


}