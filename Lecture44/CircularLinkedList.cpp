#include<iostream>
using namespace std;
class Node 
{
    public :
      int data ;
      Node* prev ;
      Node* next ;

      //Constructor 

      Node(int data)
      {
        this -> data = data ;
        this -> next = NULL ;
        this->prev = NULL ;
      }
      ~Node()
      {
        int value = this-> data ;
         if(this-> next != NULL)
         {
           delete next ;
           this->next = NULL ;
           cout << "Memory free for the node having the value :" << value << endl ;
         }
      }
};
void InsertNode(Node* &tail , int element,int data )
{  
    // empty list 
    if(tail== NULL)
    {
        Node* newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode ;
    }
    else
    {
     Node* curr = tail ;
    while(curr-> data !=element)
    {
        curr = curr->next ;
    }
   Node* temp = new Node(data);
    temp->next = curr->next ;
    curr->next = temp ;
  }
}
void Print(Node* &tail)
{
    if(tail==NULL)
    {
        cout << "List is empty" << endl;
        return ;
    }
     Node* temp = tail ;
    do
    {
      cout << tail->data << " " ;
      tail = tail->next ;
    }while(tail!= temp);
    cout << endl ;
}
void deleteNode(Node* &tail , int value )
{  // empty list
    if(tail==NULL)
    {
        cout << "List is empty" << endl;
        return ;
    }
    else
    {  // non-empty list ;
        Node* prev = tail ;
        Node* curr = prev -> next ;
        while(curr->data != value)
        {
            prev = curr ;
            curr = curr -> next;
        }
        prev-> next = curr->next ;
        //>=2 nodes
        if(curr == tail)
        {
            tail = prev ;
        }
        // 1 node
        if(curr == prev)
        {
            tail = NULL; 
        }
        curr->next = NULL;
        delete curr ;


    }
}
int main()
{
    Node* tail = NULL ;
    InsertNode(tail, 5, 10);
   
    Print(tail);
   
    deleteNode(tail,10);
    Print(tail);
    return 0;
}