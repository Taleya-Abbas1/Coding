#include<iostream>
using namespace std ;
// All operations of queue has time complexity -> O(1)
class queue{
    public :
    // properties
     int *arr;
     int size ;
     int front ;
     int rear ;
     // functions/behaviour 
        queue(int size)
        {
            this->size = size;
            arr = new int[size];
            front = 0;
            rear = 0;
        }
        bool isEmpty()
        {
            if(front == rear)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        void enqueue(int element)
        {
            if(rear == size)
            {
                cout << "Queue is full" << endl;
                return;
            }
            else{
                arr[rear]  = element ;
                rear++ ;
            }
        }

        void dequeue()
        {
            if(front == rear)
            {
                cout << "Queue is empty"<< endl ;
                return ;
            }
            else{
                arr[front] = -1 ;
                front++ ;
                if(front == rear)
                {
                    front = 0;
                    rear = 0 ;
                }
            }
        }
        int frontElement()
        {
            if(front == rear)
            {
                cout << "Queue is empty" << endl;
                return -1;
            }
            else{
                return arr[front];
            }
        }
        void display()
        {
            while(front != rear)
            {
                cout << arr[front] << " ";
                front++;
            }
        }

};
int main()
{
    queue q(5);
    cout << "Is Empty :" << q.isEmpty() << endl;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(5);
    q.enqueue(8);
    cout << "Is Empty :" << q.isEmpty() << endl;
    cout << "Front Element :" << q.frontElement() << endl;
    cout << "----After dequeuing-----" << endl;
    q.dequeue();
    cout << "Front Element :" << q.frontElement() << endl;
    q.display();
    
    return 0;

}