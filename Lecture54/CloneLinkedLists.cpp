#include<iostream>
#include<unordered_map>
using namespace std ;
class Node
{
public:
    int data;
    Node* next;
    Node* random ;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->random = NULL;
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
void InsertAtTail(Node* &head, Node* &tail, int data)
{
    Node* temp = new Node(data);
    if(head == NULL)
    {
        head = temp;
        tail = temp;
        return ;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}
Node* cloneLinkedList(Node* Head)
{
    Node* cloneHead = NULL ;
    Node* cloneTail = NULL ;
    Node* temp = Head;
    //step1 :Create the clone of list with next pointers
    while(temp !=NULL)
    {
        int data = temp->data;
        InsertAtTail(cloneHead,cloneTail,data);
        temp = temp->next;
    }
    //step2 : Store mapping From originalNode to cloneNode
    unordered_map<Node*, Node* > mapping; 
    Node* originalNode = Head ;
    Node* cloneNode = cloneHead ;

    while(originalNode!=NULL && cloneNode!=NULL)
    {
        mapping[originalNode] = cloneNode;
        originalNode = originalNode->next;
        cloneNode = cloneNode->next;
    }
    //step3 :Update the random pointers
    while(originalNode!=NULL )
    {
        cloneNode->random = mapping[originalNode->random]; 
        originalNode = originalNode->next;
        cloneNode = cloneNode->next; 
    }
    return cloneHead ;

    
    

}

int main()
{
    // Step 1: Create original linked list
    Node* node1 = new Node(10);
    Node* head = node1;
    InsertAtHead(20, head);
    InsertAtHead(30, head);
    InsertAtHead(-90, head);
    InsertAtHead(-100, head);

    // Now the list is: -100 -> -90 -> 30 -> 20 -> 10

    // Step 2: Manually set random pointers
    head->random = head->next->next;            // -100 -> 30
    head->next->random = head;                  // -90 -> -100
    head->next->next->random = head->next->next; // 30 -> 30
    head->next->next->next->random = NULL;      // 20 -> NULL
    head->next->next->next->next->random = head;// 10 -> -100

    cout << "Original List: " << endl;
    Print(head);

    // Step 3: Clone the list
    Node* clonedList = cloneLinkedList(head);

    cout << "Cloned List: " << endl;
    Print(clonedList);

    return 0;
}