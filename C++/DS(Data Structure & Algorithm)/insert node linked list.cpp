// insert node linked list
#include <iostream>
using namespace std;

struct node 
{
    int data ;
    node * next ;         // pointer
} ;

node* head = NULL ;         // بوينتر بيشاور علي اول عنصر في linked list 

// insert node function 
void insertNode(int value)
{
    node* newNode ;                    node* last ;
    newNode = new node ;
    newNode-> data = value ;

    if(head == NULL)
    {
        head = newNode ;
        newNode-> next = NULL ;
    }
    else
    {
        last = head ; 
        while(last->next != NULL)
        {
            last = last->next ;
        }
        last->next = newNode ;
        newNode->next = NULL ;

    }
}

int main()
{
    
  insertNode(10) ;
  insertNode(20) ;
  insertNode(30) ;
  insertNode(40) ;
    

    return 0 ;
}
 