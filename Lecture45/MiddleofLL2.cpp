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

Node* Middle(Node* Head)
{
    if(Head == NULL)
    {
        return NULL;
    }
    if(Head->next == NULL)
    {
        return Head;
    }
    if(Head->next->next == NULL)
    {
        return Head->next;
    }
    Node* fast = Head-> next ;
    Node* slow = Head ;

    while(fast != NULL)
    {
        fast = fast -> next ;
        if(fast!=NULL)
        {
            fast = fast -> next;
        }
        slow = slow -> next ;
        
    }
    return slow;
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
    Node* middleNode = Middle(head);
   cout << "Middle Element: " << middleNode->data << endl;
  
}