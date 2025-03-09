// circular queue 
#include <iostream>
using namespace std;
# define size 5
int queue[size] ;
int front = -1 ;
int rear = -1 ; 

// functions 

// isEmpty
bool isEmpty()
{
    if(front == -1 && rear == -1 )
    {
        return true ;
    }
    else
    {
        return false ;
    }
}

// isFull
bool isFull()
{
    if(front == 0 && rear == size -1 )
    {
        return true ;
    }
    else if(front == rear + 1)
    {
        return true ;
    }
    else
    {
        return false ;
    }
}

// enqueue 
void enqueue(int value)
{
    if(isFull())
    {
        cout << "queue is full." << endl;
    }
    else
    {
        if(isEmpty())
        {
            front = rear = 0 ; 
            queue[rear] = value ;
        }
        else if(rear == size -1)
        {
            rear = 0 ;
            queue[rear] = value ;
        }
        else
        {
            rear++ ;
            queue[rear] = value ;
        }
    }
}

// dequeue 
void dequeue ()
{
    if(isEmpty())
    {
        cout << "queue is empty." << endl;
    }
    else
    {
        if(front == rear)
        {
            front = -1 ; 
            rear = -1 ; 
        }
        else if (front == size - 1)
        {
            front = 0 ; 
        }
        else
        {
            front++;
        }
    }
}

// peak 
int peak()
{
    if(isEmpty())
    {
        cout << "queu is empty." << endl;
        return -1 ; 
    }
    else
    {
        return queue[front] ;
    }
}

// display 
void display()
{
    if(isEmpty())
    {
        cout << "queu is empty." << endl;
    }
    else
    {
        if(front <= rear)
        {
            for(int i = front ; i <= rear ; i++)
            {
                cout << queue[i] << " " ;
            }
            cout << endl; 
        }
        else
        {
            for(int i = front ; i <= size - 1 ; i++)
            {
                cout << queue[i] << " " ;
            }

            for(int i = 0 ; i <= rear ; i++)
            {
                cout << queue[i] << " " ;
            }

            cout << endl;
        }
        
    }
    
}
int main()
{
    
    enqueue(1) ;
    enqueue(2) ;
    enqueue(3) ;
    enqueue(4) ;
    enqueue(5) ;

    display() ;                     // 1 2 3 4 5 

    enqueue(6) ;                    // queue is full 

    dequeue() ; 

    display() ;                    // 2 3 4 5 

    enqueue(6) ;          

    display() ;                   // 2 3 4 5 6 

    cout << "peak = " << peak() << endl ;              // 2 

    return 0 ;
}
  