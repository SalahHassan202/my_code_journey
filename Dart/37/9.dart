
void main()
{
  // set 
  
  Set<String> fruits = {"Apple", "Banana", "Orange"};
  print(fruits) ;         // {Apple, Banana, Orange}
  print("************************") ; 
  fruits.add("Grapes");       // Adding a new element
  print(fruits) ;              // {Apple, Banana, Orange, Grapes}
  print("************************") ; 
  fruits.add("Apple");       // Adding a repete element
  print(fruits) ;              // {Apple, Banana, Orange, Grapes}
  print("************************") ; 
  // set ===> don't repete an element

}