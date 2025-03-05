void main()
{
  Node head = Node(Task(1, 'study math')) ;
  Node node2 = Node(Task(2, 'Go to the gym')) ;
  Node node3 = Node(Task(3, 'playing football')) ;

  head.next = node2 ;
  node2.next = node3 ; 

  print(head.next!.next!.task.text) ;              // playing football
  
  
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