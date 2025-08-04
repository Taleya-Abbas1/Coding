#include<iostream>
using namespace std ;
class Node
{
public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    
  
};
void InsertAtHead(int data , Node* &head)
{
    Node* temp = new Node(data);
  temp-> next = head ;
  head = temp ;
    
}
void Print(Node* &Head)
{
    Node* temp = Head ;
    while(temp !=NULL )
    {
         cout << temp -> data << " " ;
         temp = temp -> next ;

    }
    cout << endl ;
}
Node* reverse1(Node* head)
{
   // base case 
   if( head == NULL || head-> next == NULL)
   {
         return head ;
   }
   Node* smallHead = reverse1(head-> next);
   head->next->next = head ;
   head-> next = NULL;
    return smallHead;
}
Node* reverseLinkedList(Node* head)
{
   
  return reverse1(head);
}

int main()
{
    Node* node1 = new Node(10);
    Node* head= node1;
   InsertAtHead(20, head);
   InsertAtHead(30, head);
   InsertAtHead(-90, head);
   InsertAtHead(-100, head);
   Print(head);

   head = reverseLinkedList(head);
   Print(head);
}