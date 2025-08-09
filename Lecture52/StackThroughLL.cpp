#include<iostream>
using namespace std ;
class Stack
{
    public :
    struct Node
    {
        Node* next;
        int val ;
        Node(int val)
        {
            this-> val = val;
            next = NULL;
        }
    };
    Node* top ;

    Stack()
    {
        top = NULL;
    }

    void push(int value)
    {  
        
            Node* newNode = new Node(value);
            newNode->next = top ;
            top = newNode;
        
        
    }
    void pop()
    {
        if(top== NULL)
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            Node * temp = top ;
            top = top -> next ;
            delete temp ;
         
        }
    }
    void peek()
    {
        if(top == NULL)
        {
            cout << "Stack is empty" << endl;
           
        }
        else
        {
            cout << "Top element is: " << top->val << endl;
        
        }
    }

    bool isEmpty()
    {
        if(top == NULL)
        {
            cout << "Stack is empty" << endl;
            return true;
        }
        else
        {
            cout << "Stack is not empty" << endl;
            return false;
        }

    }
   
};

int main()
{
    Stack s;
    s.isEmpty();

    s.push(10);
    s.push(20);
    s.push(30);
    s.peek();
    s.isEmpty();

    s.pop();
    s.peek();
    s.pop();
    s.peek() ;
    s.pop();
    s.peek();
    s.isEmpty();
    s.peek();
    s.pop();
   
    return 0;
}