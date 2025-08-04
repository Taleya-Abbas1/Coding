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
Node* K_reverseLinkedList(Node * head, int k )
{
    if(head == NULL )
    {
        return NULL ;
    }
    Node* prev = NULL ;
    Node* curr = head ;
    Node* next = NULL;
    int cnt = 0;
    while(curr!=NULL && cnt < k)
    {
        next = curr-> next ;
        curr-> next = prev ;
        prev = curr ;
        curr = next ;
        cnt++;
    }
    if(next != NULL)
    {
        head-> next = K_reverseLinkedList(next, k);
    }
    return prev ;
}

int main()
{
    Node* node1 = new Node(6);
    Node* head= node1;
   InsertAtHead(5, head);
   InsertAtHead(4, head);
   InsertAtHead(3, head);
   InsertAtHead(2, head);
    InsertAtHead(1, head);
 
   Print(head);
    int k ;
    cout << "Enter the value of k: ";
    cin >> k;
   head = K_reverseLinkedList(head, k);
   Print(head);
}