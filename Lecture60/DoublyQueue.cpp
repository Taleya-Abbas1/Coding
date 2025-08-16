#include<iostream>
using namespace std ;
class   deque{
   public :
   int *arr ;
   int size ;
   int front ;
   int rear ;
   deque(int s)
   {
       size = s;
       arr = new int[size];
       front = -1;
       rear = -1;
   }
   void push_front(int value)
   {
    //check isempty?
   if((front == 0 && rear == size -1 ) || ( front!=0 && rear == (front -1) %(size -1)))
        {
            cout << "Queue is full" << endl;
        }
        // For single element
        if(front == -1)
        {
            front = rear = 0 ;
        }
        else if(front == 0 && rear != size - 1)
        {
            front = size - 1; // wrap around to the end
        }
        else
        {
            front--; // move front back
        }   
   }
   void push_back(int data)
   {
        // check if it is empty or not 
        if((front == 0 && rear == size -1 ) || ( front!=0 && rear == (front -1) %(size -1)))
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

   void pop_front()
   {
       // Check if the queue is empty
       if (front == -1)
       {
           cout << "Queue is empty" << endl;
           return;
       }
       int ans = arr[front];
       arr[front] = -1;
       // If there's only one element
       if (front == rear)
       {
           front = rear = -1;
       }
       else if (front == size - 1)
       {
           front = 0;
       }
       else
       {
           front++;
       }
   }

   void pop_back()
   {
       // Check if the queue is empty
       if (front == -1)
       {
           cout << "Queue is empty" << endl;
           return;
       }
      int ans = arr[rear];
      arr[rear] = -1;
       // If there's only one element
       if (front == rear)
       {
           front = rear = -1;
       }
       else if (rear == 0)
       {
           rear = size - 1;
       }
       else
       {
           rear--;
       }
   }
   int getfront()
   {
    if(isEmpty())
    {
        return -1 ;
    }
    return arr[front];
   }
   int getrear()
   {
      if(isEmpty())
    {
        return -1 ;
    }
    return arr[rear];
   }
   bool isEmpty()
   {
        return front == -1 ? true : false;
   }
   bool isFull()
   {
     if((front == 0 && rear == size -1 ) || ( front!=0 && rear == (front -1) %(size -1)))
        {
            return true;
        }
        return false;
   }
};
int main()
{
    int sizeCount ;
    deque dq(5);
    dq.push_back(10);
    sizeCount++;
    dq.push_front(20);
    sizeCount++;
    dq.push_back(30);
    sizeCount++;
    dq.push_front(40);

    
    return 0;
}