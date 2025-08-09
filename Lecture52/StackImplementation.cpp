#include<iostream>
using namespace std ;
class Stack 
{
    // properties
    public :
    int *arr ;
    int top ;
    int size;

    //behavior
    Stack(int size)
    {
        this -> size = size ;
        arr = new int[size];
        top = -1;
    }
    void push(int element)
    {
     if(size-top > 1)
     {
        top++;
        arr[top] = element;
     }
     else
     {
        cout << "Stack Overflow" << endl;
     }
    }
    void pop()
    {
        if(top>=0)
        {
            top--;
        }
        else
        {
            cout << "Stack Underflow" << endl;
        }

    }
    
    int peek()
    {
         if(top >=0 && top < size)
         {
            return arr[top];
         }
         else{
            cout << "Stack is empty" << endl;
            return -1;
         }
    }
    bool isEmpty()
    {
        return top == -1 ?  true :  false;
    }
    

};


int main()
{
     Stack s(5);
    cout << " Is stack empty ? " << s.isEmpty() << endl;
     s.pop();
     s.push(22);
     s.push(43);
     s.push(12);
    

    
     cout << " Is stack empty ? " << s.isEmpty() << endl;
      s.pop();
     cout << " Top elemnet is :"  << s.peek()<< endl ;
     s.push(24);
     s.push(76);
     s.push(13);

     cout << " Is stack empty ? " << s.isEmpty() << endl;
     cout << " Top elemnet is :"  << s.peek()<< endl ;

     s.push(100);
     s.pop();
     s.pop();
     s.pop();
     s.pop();
     s.pop();
     cout << " Top elemnet is :"  << s.peek()<< endl ;

}