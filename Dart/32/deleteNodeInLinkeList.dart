void main()
{
  Node head = Node(Task(1, 'study math')) ;
  
  Node node3 = Node(Task(3, 'playing football')) ;

  //  delete a nodde in linked list 
  // by dlete the next to the next node
  head.next = node3 ;


  print(head.next!.task.text) ;              // playing football
  
  
}


// class
class Task
{
  int id ; 
  String text ;

  // constructor 
  Task(this.id , this.text)
  {

  }
}

// class 
class Node
{
  Task task ; 
  Node? next ;             // like pointer 

  // constructor
  Node(this.task , [this.next])
  {

  }
}