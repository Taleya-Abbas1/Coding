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
        cout << "Node with data " << data << " deleted" << endl;
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
void InsertAtTail(Node* &tail, Node* temp)
{
    tail-> next =temp ;
    tail = temp ;
}
Node* SortZeroOneTwo(Node* head)
{
   Node* zeroHead = new Node(-1);
   Node* oneHead = new Node(-1);
    Node* twoHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneTail = oneHead;    
    Node* twoTail = twoHead;

    Node* temp = head;
    // create three separate lists for 0s, 1s, and 2s
    while(temp !=NULL)
    {
        int value = temp->data;
        if(value == 0)
        {
            InsertAtTail(zeroTail,temp);
        }
        else if(value == 1)
        {
            InsertAtTail(oneTail,temp);
        }
        else if(value == 2)
        {
            InsertAtTail(twoTail,temp);
        }
        temp = temp->next;
    }
    // Merge the lists 
    if( oneHead-> next != NULL)
    {
        zeroTail->next = oneHead-> next;
    }
    else
    {
           zeroTail->next = twoHead-> next;
    }
    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    head = zeroHead->next;
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head ;
}

int main()
{
    Node* node1 = new Node(2);
    Node* head= node1;
   InsertAtHead(1, head);
   InsertAtHead(2, head);
   InsertAtHead(0, head);
   InsertAtHead(1, head);
   Print(head);
    head = SortZeroOneTwo(head);
    Print(head);
   
}