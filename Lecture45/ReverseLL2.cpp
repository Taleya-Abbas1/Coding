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
void solve(Node* &head , Node* curr ,Node* prev )
{
    // base case
    if(curr == NULL)
    {
        head = prev ;
        return ;
    }
    Node* forward = curr -> next ;
    solve(head,forward,curr);
    curr->next = prev; // reverse the link
}
Node* reverseLinkedList(Node* head)
{
     Node* curr = head ;
    Node* prev = NULL ;
   
    solve(head, curr, prev);
    return head;
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