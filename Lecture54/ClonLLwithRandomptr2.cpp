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
Node* CloneLinkedList(Node* head)
{
    //step1: create a clone Node 
    Node* cloneHead = NULL ;
    Node* cloneTail = NULL ;
    Node* temp = head ;
    while(temp != NULL)
    {
        InsertAtTail(cloneHead, cloneTail, temp->data);
        temp = temp->next;
    }
    //step2 : Add CloneNodes in between originalNodes
    Node* cloneNode = cloneHead ;
    Node* OriginalNode= head ;
    while(OriginalNode!=NULL && cloneNode!=NULL)
    {
        Node* next = OriginalNode->next;
        OriginalNode->next = cloneNode;
        OriginalNode = next;
        next = cloneNode->next;
        cloneNode->next = OriginalNode;
        cloneNode = next;
    }
    // step3:Set the random pointers
    temp = head ;
    while(temp != NULL)
    {
        if(temp->next != NULL)
        {
              temp->next->random = temp->random ? temp->random->next :temp->random;
        //     if(temp->random != NULL)
        //    {
        //     temp->next->random = temp->random->next;
        //    }
        // }
        // else
        // {
        //     temp->next = temp->random;
        // }
        temp = temp->next->next; // Move to the next original node
    }
    //step4: Restore the original list and extract the clone list
    cloneNode = cloneHead ;
     OriginalNode= head ;
     while(OriginalNode!=NULL && cloneNode!=NULL)
     {
         OriginalNode-> next  =cloneNode->next;
         OriginalNode = OriginalNode->next;
         if(OriginalNode !=NULL)
         {
         cloneNode->next = OriginalNode->next ;
         cloneNode = cloneNode->next;
         }

     }
     return cloneHead;
}
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
    Node* clonedList = CloneLinkedList(head);

    cout << "Cloned List: " << endl;
    Print(clonedList);

    return 0;
}