#include<iostream>
using namespace std;
class Cqueue{
   public :
   int *arr ;
   int size ;
   int front ;
   int rear ;

   Cqueue(int size)
   {
       this->size = size;
       arr = new int[size];
       front = -1;
       rear = -1;
   }
   void enqueue(int data)
   {
        // check if it is empty or not 
        if((front == 0 && rear == size -1 ) || (rear == (front -1) %(size -1)))
        {
            cout << "Queue is full" << endl;
        }
        // pushing the first element 
        else if(front == -1)
        {
            front = 0 ;
            rear = 0 ;
        }
        // front is evacutaed and rear is reached n    
        else if(front !=0 && rear == size -1)
        {
            rear = 0;
        }
        else
        {
           rear++ ;
        }
        arr[rear] = data;
   }
   int dequeue()
   {
      if(front == -1)
      {
        cout << "Queue is empty" << endl;
        return -1;
      }
      int ans = arr[front];
      arr[front] = -1;  
      // if only one element is present 
      if(front == rear)
      {
          front = -1;
          rear = -1;
      }
      // if front is equal to size - 1
      else if(front == size -1)
      {
        front = 0;
      }
      else
      {
        front++;
      }
      return ans;
   }
   bool isEmpty()
   {
      if(front == -1)
      {
          return true;
      }
      
      return false;
   }
};
int main()
{
    Cqueue q(5);
    cout << "Is Empty :" << q.isEmpty() << endl;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(5);
    q.enqueue(8);
     q.dequeue();
    cout << "Is Empty :" << q.isEmpty() << endl; 
    
    cout << "----After dequeuing-----" << endl;
    q.dequeue();
   
    q.dequeue();
    q.dequeue();
    cout << "Is Empty :" << q.isEmpty() << endl;

   
}