void main()
{
  // set         ===>       {}
  Set <String> favColours = {'black' , 'white' , 'yellow' } ;
  print (favColours) ;              // {black, white, yellow}
  // set         ===>  مش بتكرر القيم 
  favColours.add('red'); 
  print (favColours) ; 
  favColours.remove('yellow') ;
  print (favColours) ; 

          
}