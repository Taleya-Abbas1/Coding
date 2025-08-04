#include<iostream>
using namespace std;

class Node 
{
    public :
      int data ;
      Node* next ;

      //Constructor 
      Node(int data)
      {
        this -> data = data ;
        this -> next = NULL ;
      }

      // Destructor
      // It will free the memory of the node when it is deleted
      // This is called when the object goes out of scope or is deleted 
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
//Insertion Function 
void InsertAtHead(int data , Node* &Head)
{
    // create a new node 
    Node* temp = new Node(data);
    
    temp->next = Head ;
    Head = temp ;
}
void InsertAtTail(int data , Node* &tail)
{
    // create a new node 
    Node* temp = new Node(data);
    
    tail->next = temp ;
    tail = temp;
    // or u can write  tail = tail -> next 
}

void InsertAtPosition(int data ,int position,Node* &Head ,Node* &tail)
{
    // if position is 1 then insert at head
    if(position == 1)
    {
       InsertAtHead(data,Head);
       return ; // Exit the function after inserting at head
    }

    // create a new node
       Node* temp = Head;
      int cnt  = 1 ;
      while(cnt < position - 1 )
      {
        temp = temp -> next ;
        cnt ++ ;
      }
     // insert at last 
     if(temp->next == NULL)
     {
        InsertAtTail(data, tail);
        return; // Exit the function after inserting at tail
     }


      // create insereted node
      Node* NodeToInsert = new Node(data);
      NodeToInsert -> next  = temp->next ;
      temp-> next = NodeToInsert;
      

  }
// Deletion of Node of linkedList at any position
void DeleteNode(Node* &Head ,Node* &tail , int position)
{
  if(position == 1)
  {
    Node* temp = Head ;
    Head = Head->next;

    // free memory 
    temp -> next = NULL ;
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
      prev-> next = current -> next ;
      
     // free memory
     current -> next = NULL;
     delete current ;
  }

}


// printing linked List 
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

int main()
{

    Node* node1 = new Node(10);
    // data and next pointers values

    // cout << node1->data << endl ;
    // cout << node1->next << endl ;
     
    Node* Head = node1 ;
    Node* tail = node1 ;
     Print(Head);

    InsertAtHead(20,Head );
    
     Print(Head);

    // Insert at tail 
     InsertAtTail(30,tail);
     
    Print(Head);


  InsertAtPosition(40,4,Head,tail);
   Print(Head);
 
 

       //check the current values 
      cout << "Head : " << Head->data << endl;

      cout << "Tail : " << tail->data << endl;
     DeleteNode(Head,tail,2);

     Print(Head);

      cout << "Head : " << Head->data << endl;

      cout << "Tail : " << tail->data << endl;
     


}