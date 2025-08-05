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
int getLength(Node* head)
{
    int count = 0;
    Node* temp = head;
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
Node* Sort(Node* head)
{
    if (head == NULL || head->next == NULL)
    {
        cout << "List is empty or has only one element" << endl;
        return head;
    }

    int len = getLength(head);
    for (int i = 0; i < len - 1; i++)
    {
        Node* curr = head;
        Node* prev = NULL;

        while (curr != NULL && curr->next != NULL)
        {
            if (curr->data > curr->next->data)
            {
                // Swap links
                Node* forward = curr->next;
                curr->next = forward->next;
                forward->next = curr;

                if (prev == NULL)
                {
                    // Updating head if first two nodes are swapped
                    head = forward;
                }
                else
                {
                    prev->next = forward;
                }

                // Move prev to forward (new position of curr)
                prev = forward;
            }
            else
            {
                // No swap, just move pointers forward
                prev = curr;
                curr = curr->next;
            }
        }
    }

    return head;
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
    InsertAtHead(1, head);
    InsertAtHead(3, head);
    InsertAtHead(4, head);
    InsertAtHead(5, head);
    InsertAtHead(3, head);
    InsertAtHead(3, head);
    InsertAtHead(2, head);
   
   
   Print(head);
   head=  Sort(head);
    cout << "After sorting: ";
    Print(head);
    
    
   

   
}