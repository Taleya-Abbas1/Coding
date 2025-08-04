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
// print function

void Print(Node* &Head)
{
    Node* temp = Head ;
    while(temp != NULL)
    {
       cout << temp-> data  << " " ;
       temp = temp  -> next ;
    }
    cout << endl ;
}
// Length of the linked list

int getLegth(Node* &Head)
{
    int len = 0 ;
   Node* temp = Head ;
    while(temp != NULL)
    {
      len++ ;
       temp = temp  -> next ;
    }
    cout << endl ;
    return len ;
}

// Insertion At Head

void InsertAtHead(Node* &tail,Node* &Head , int data)
{
    if(Head == NULL)
    {
     Node* temp = new Node(data);
        Head = temp;
        tail = temp;
        return ;
    }
 Node* temp = new Node(data); 
 temp-> next = Head ;
 Head->prev = temp ;
 Head = temp ;
}
//Insertion At Tail

void InsertAtTail(Node* &tail, Node* &Head, int data)
{
    if(tail == NULL)
    {
     Node* temp = new Node(data);
        tail = temp;
        Head = temp;
        return ;
    }
    Node* temp = new Node(data); 
    tail-> next = temp;
    temp->prev= tail;

    tail = temp ; 
}
//Insertion At Middle

void InsertAtPosition(int data ,int position,Node* &Head ,Node* &tail)
{
    if(position == 1)
    {
        InsertAtHead(tail,Head,data);
        return ;
    }
   Node* temp = Head ;
   int cnt = 1;
   while(cnt < position - 1 )
   {
        temp = temp ->next ;
        cnt++ ;
   }
   if(temp -> next == NULL)
   {
     InsertAtTail(tail,Head,data);
     return ;
   }

    Node* NodeToInsert = new Node(data);
    NodeToInsert-> next = temp->next ;
    temp->next->prev = NodeToInsert ;
    temp->next = NodeToInsert ;
    NodeToInsert->prev = temp ;

}
// Deletion of Node of linkedList at any position
void DeleteNode(Node* &Head ,Node* &tail , int position)
{
  if(position == 1)
  {
    Node* temp = Head ;
   temp->next->prev = NULL ;
    Head = temp->next ;
    temp-> next = NULL;

    // free memory 
    delete temp ;
  }
  else
  {
      Node* prev = NULL ;
      Node* current = Head ;
      int cnt = 1;
      while( cnt < position)
      {
        prev = current ;
        current = current-> next ;
        cnt++ ;
      }
      if(current == tail)
      {
          tail = prev;
      }

      current ->prev = NULL;
      prev-> next = current -> next ;
      
     // free memory
     current -> next = NULL;
     delete current ;
  }

}
int main()
{
    //  Node* node1 = new Node(10);
    //  Node* Head = node1 ;
    //  Node* tail = node1 ;
    Node* Head = NULL;
    Node* tail = NULL;
     Print(Head);

       cout << "Length of the list is : " << getLegth(Head) << endl;

       InsertAtHead(tail,Head, 11);
       Print(Head);

       InsertAtHead(tail,Head, 13);
       Print(Head);

       InsertAtHead(tail,Head, 8);
       Print(Head);

       InsertAtTail(tail,Head, 20);
       Print(Head);

       InsertAtTail(tail,Head, 30);
       Print(Head);

         InsertAtPosition(25, 4, Head, tail);
        Print(Head);

         InsertAtPosition(101, 1, Head, tail);
        Print(Head);

         InsertAtPosition(102, 8, Head, tail);
        Print(Head);

            // cout << tail->data << endl;
            // cout << Head->data << endl;
        
        DeleteNode(Head, tail, 8);
        Print(Head);
        cout << tail->data << endl;
            cout << Head->data << endl;
}