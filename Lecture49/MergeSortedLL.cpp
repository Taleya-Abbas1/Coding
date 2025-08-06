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
Node* solve(Node* first ,Node* second)
{
    if(first-> next == NULL)
    {
        first -> next = second;
        return first;
    }
     Node* curr1= first ;
     Node* next1 = curr1->next;
     Node*curr2 = second;
     Node* next2 =  NULL;
     while(curr1 !=NULL && curr2 !=NULL)
     {
     if(curr1-> data <= curr2-> data &&(next1->data >= curr2->data))
     {
     
            next2 = curr2->next;
           curr1->next = curr2 ;
           curr2->next = next1;
           // update pointers
            curr1 = curr2;
           curr2 = next2 ;
         
     }
     else
     {
        curr1 = next1 ;
       
        next1 = next1->next;
        
        if(next1 == NULL)
        {
            curr1->next = curr2 ;
            break;
           
        }
     }
    }
        return first;
} 
Node* MergeLL(Node* first , Node* second)
{
    if(first == NULL)
    {
        return second;
    }
    if(second == NULL)
    {
        return first ;
    }
    if(first->data < second-> data)
    {
       return  solve(first,second);
    }
    else
    {
        return  solve(second,first);
    }

}
int main()
{
    Node* node1 = new Node(5);
    Node* first = node1;
   InsertAtHead(3, first);
   InsertAtHead(1, first);
   Print(first);

     Node* node2 = new Node(5);
    Node* second = node2;
   InsertAtHead(4, second);
   InsertAtHead(2, second);
   Print(second);
    Node* mergedHead = MergeLL(first, second);
    Print(mergedHead);
    return 0;
}