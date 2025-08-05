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
Node* RemoveDuplicates(Node* head)
{
    if(head == NULL || head-> next == NULL)
    {
        cout << "No duplicates found " << endl;
        return head ;
    }
    Node* curr = head ;
    while(curr != NULL)
    {
        if((curr-> next != NULL) && (curr->data == curr->next-> data))
        {
            Node* next_next = curr-> next-> next ;
            Node* nodeToDelete = curr-> next ;
            delete nodeToDelete;
            curr-> next = next_next ;
        }
        else{
            curr = curr-> next ;;
        }
    }
    return head;
}

int main()
{
    Node* node1 = new Node(4);
    Node* head= node1;
    InsertAtHead(3, head);
    InsertAtHead(3, head);
    InsertAtHead(3, head);
    InsertAtHead(3, head);
    InsertAtHead(3, head);
    InsertAtHead(3, head);
    InsertAtHead(3, head);
    InsertAtHead(3, head);
    InsertAtHead(3, head);
    InsertAtHead(2, head);
    InsertAtHead(2, head);
    InsertAtHead(1, head);
   Print(head);
   RemoveDuplicates(head);
    cout << "After removing duplicates: " << endl;


    Print(head);
}