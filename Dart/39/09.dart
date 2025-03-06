// Create a class called House with three properties: id, name, and price. 
// The class has a constructor that takes these three parameters (named parameters) and initializes the properties.

// In the main() function, make a list of House objects, and add three House objects to the list.

// Then use for-in loop to iterate through the list of House objects, and print the details (ID, name, and price).


void main()
{
 
  List<House> houses = [
    House(id : 1 , name: "house :1" , price : 100000) ,
    House(id : 2 , name: "house :2" , price : 200000) ,
    House(id : 3 , name: "house :3" , price : 300000) ,
  ] ;

  // for in

  for(var item in houses)
  {
    print("ID : ${item.id} , Name : ${item.name} , Price : ${item.price}") ;
  }

  // output
  // ID : 1 , Name : house :1 , Price : 100000.0
  // ID : 2 , Name : house :2 , Price : 200000.0
  // ID : 3 , Name : house :3 , Price : 300000.0

  
}


// class
class House
{
  int? id ; 
  String? name ;
  double? price ;

  House({required this.id ,required this.name , required this.price  }) ;
}