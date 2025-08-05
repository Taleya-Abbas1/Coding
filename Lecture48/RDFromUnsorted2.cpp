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
    ~Node()
    {
        
        cout << "Memory freed for node with data: " << this->data << endl;
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
Node* RemoveDuplicate(Node* head)
{
    if(head == NULL || head->next == NULL)
    {
        cout << "No duplicates found " << endl;
        return head ;
    }
    Node* curr = head ;
    while(curr != NULL)
    {
        Node* temp = curr -> next ;
        Node* prev = curr;
        while(temp != NULL)
        {
            if( curr->data == temp->data)
            {
                 Node* next_next = temp->next;
                Node* nodeToDelete = temp; 
                prev->next = next_next; 
                temp = temp->next;
                delete nodeToDelete; 
            }
            else
            {
                prev = temp;
                temp = temp->next;  
                
            }
        }
        curr = curr->next;
    }
    return head;
}

int main()
{
    Node* node1 = new Node(4);
    Node* head= node1;
    InsertAtHead(1, head);
    InsertAtHead(3, head);
    InsertAtHead(4, head);
    InsertAtHead(5, head);
    InsertAtHead(3, head);
    InsertAtHead(3, head);
    InsertAtHead(2, head);
    Print(head);
   head = RemoveDuplicate(head);
   cout << "After removing duplicates: ";
   Print(head);

}