#include<iostream>
#include<vector>
using namespace std ;
struct  Node
{
public:
    int data;
   struct Node* next;
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
void InsertAtTail(Node* &Head , Node* &tail , int val)
{
    Node* temp = new Node(val);
    if(Head == NULL)
    {
        Head = temp ;
        tail = temp ; 
    }
    else{
        tail -> next = temp ;
        tail = temp ;
    }
}// Generic Way 
struct Node* Add(Node* first , Node* second)
{
    Node* ansHead = NULL ;
    Node* ansTail = NULL;
    int carry = 0;
    while(first != NULL || second != NULL || carry !=0 )
    {
        int val1 = 0 ;
        if(first !=NULL)
        {
            val1 = first -> data;
        }
         int val2 = 0 ;
        if(second !=NULL)
        {
            val2 = second -> data;
        }
        int sum = carry + val1 + val2;
        int digit = sum %10 ;
        InsertAtTail(ansHead, ansTail, digit);
        carry = sum/10 ;
        if(first !=NULL)
        {
         
        first = first->next;
        }
        if(second !=NULL)
        {
        second = second->next;
        }
    }
    
    return ansHead ;
}
// struct Node* Add(Node* first , Node* second)
// {
//     Node* ansHead = NULL ;
//     Node* ansTail = NULL;
//     int carry = 0;
//     while(first != NULL && second != NULL)
//     {
//         int sum = carry + first-> data + second-> data;
//         int digit = sum %10 ;
//         InsertAtTail(ansHead, ansTail, digit);
//         carry = sum/10 ;
//         first = first->next;
//         second = second->next;
//     }
//     while(first !=NULL)
//     {
//         int sum = carry + first-> data ; 
//         int digit = sum %10 ;
//         InsertAtTail(ansHead, ansTail, digit);
//         carry = sum/10 ;
//         first = first->next;
//     }
//     while(second !=NULL)
//     {
//         int sum = carry + second-> data ; 
//         int digit = sum %10 ;
//         InsertAtTail(ansHead, ansTail, digit);
//         carry = sum/10 ;
//         second = second->next;
//     }
//     while(carry != 0)
//     {
//          int sum = carry  ; 
//         int digit = sum %10 ;
//         InsertAtTail(ansHead, ansTail, digit);
//         carry = sum/10 ;
//     }
//     return ansHead ;
// }
struct Node* addTwoNumber(Node* first , Node* second)
{
    // Reverse both linked lists
    first = reverse(first);
    second = reverse(second);

    Node* ans = Add(first, second);
    // Reverse the result linked list
    ans = reverse(ans);
    return ans;
}
int main()
{
    Node* node1 = new Node(5);
    Node* first= node1;
   InsertAtHead(4, first);
   Print(first);
    Node* node2 = new Node(5);
    Node* second= node2;
   InsertAtHead(4, second);
     InsertAtHead(3, second);
   Print(second);

   Node* ans = addTwoNumber(first,second);
  cout <<"sum of two Linked lists is:" << endl ;
   Print(ans);

   
    
  
}