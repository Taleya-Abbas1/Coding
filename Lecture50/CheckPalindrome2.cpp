#include<iostream>
#include<vector>
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
Node* getMiddle(Node* head)
{
    Node* slow = head ;
    Node* fast = head -> next ;
    while(fast !=NULL)
    {
        fast = fast -> next ;
        if(fast != NULL)
        {
            fast = fast -> next ;
        }
        slow = slow -> next ;
    }
    return slow;
}
Node* reverse(Node* head)
{

    Node* prev = NULL ;
    Node* curr = head ;
    Node* next = NULL ;
    while(curr != NULL)
    {
        next = curr-> next ;
        curr-> next = prev ;
        prev = curr ;
        curr = next ;
    }
    return prev ;
}
bool Palindrome(Node* head)
{
   Node* middle = getMiddle(head);

   Node* temp = middle->next ;

   // reverse the second half of the linked list 
   middle->next = reverse(temp);

   Node* head1 = head ;
   Node* head2 = middle-> next ;
   while(head2 != NULL )
   {
     if( head1->data != head2-> data)
     {
        return 0 ;
     }
     head1 = head1-> next ;
     head2 = head2-> next ;
   }
    // reverse the second half back to original
    temp = middle->next ;
      middle->next = reverse(temp);
   return 1 ;


}

int main()
{
    Node* node1 = new Node(10);
    Node* head= node1;
   InsertAtHead(20, head);
   InsertAtHead(30, head);
   InsertAtHead(20, head);
   InsertAtHead(10, head);
   Print(head);
    if(Palindrome(head))
    {
         cout << "Palindrome" << endl;
    }
    else
    {
         cout << "Not Palindrome" << endl;
    }
  
}