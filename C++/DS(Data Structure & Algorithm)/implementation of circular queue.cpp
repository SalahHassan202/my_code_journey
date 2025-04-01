// queue

#include <iostream>
using namespace std;

const int size = 100 ;

// circular queue ;

class circularQueue
{
    private :
        int front ; 
        int rear ;
        int arr[size] ;
        int length ;          // as a pointer to use it in a check for the queue isEmpty or isFull 

    public :
        circularQueue()
        {

            front = 0 ; 
            rear = size - 1 ; 
            length = 0 ; 
        }
        
        // isEmpty
        bool isEmpty()
        {
            if(size == 0 )
            {
                return true ;          // queue is empty ;
            }
            else
            {
                return false ;        // queue is not empty
            }
        }

        
        // isFull
        bool isFull()
        {
            if(length == size - 1  )
            {
                return true ;          // queue is full ;
            }
            else
            {
                return false ;        // queue is not full
            }
        }

        // enQueue 
        void enQueue(int element)
        {
            if(isFull())
            {
                cout << "Queue Is Full Can't Enqueue...!" << endl;
            }
            else
            {
                rear = (rear+1) % size ;
                arr[rear] = element ;
                length++ ;
            }
        }

        // deQueue 
        void deQueue()
        {
            if(isEmpty())
            {
                cout << "Queue Is Empty Can't dequeue...!" << endl;
            }
            else
            {
                front = (front+1) % size ;
                length-- ;
            }
        }

        int frontQueue()
        {
            if(!isEmpty())
            {
                return arr[front] ;
            }
            else
            {
                cout << "Queue Is Empty....!" << endl;
            }
        }

        int rearQueue()
        {
            if( !isEmpty())
            {
                return arr[rear] ;
            }
            else
            {
                cout << "Queue Is Empty....!" << endl;
            }
        }

    void printQueue()
    {
        cout << "Elements Of Queue Are :: " << endl;
        cout << "[ " ; 
        for(int i = front ; i !=rear ; i = (i + 1) % size )
        {
            cout << arr[i] << " ";
        }
        cout << arr[rear] ;             // to print the last element in queue ===> rear 
        cout << " ]" << endl;
    }

} ;
int main()
{
    circularQueue q ; 
    q.enQueue(10) ;
    q.enQueue(20) ;
    q.enQueue(30) ;
    q.enQueue(40) ;
    q.enQueue(50) ;
    q.printQueue() ;          // [ 10 20 30 40 50 ]

    q.deQueue() ; 
    q.printQueue() ;         // [ 20 30 40 50 ]

   cout << "front is :: " << q.frontQueue() << endl;            // 20
   cout << "rear is :: " <<  q.rearQueue() << endl ;            // 50
           
    return 0 ;
}
