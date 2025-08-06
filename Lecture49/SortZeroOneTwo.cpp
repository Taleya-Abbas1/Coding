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
Node* SortZeroOneTwo(Node* head)
{
    int countZero = 0;
    int countOne = 0;
    int countTwo = 0;
    Node* temp = head;
    while(temp!= NULL)
    {
        if(temp->data == 0)
        {
            countZero++;
        }
        else if(temp->data == 1)
        {
            countOne++;
        }
        else if(temp->data == 2)
        {
            countTwo++;
        }
        temp = temp->next;
    }
   temp = head ;
    while(temp !=NULL)
    {
        if(countZero != 0)
        {
            temp->data = 0 ;
            countZero--;
        }
        else if(countOne != 0)
        {
            temp->data = 1 ;
            countOne--;
        }
        else if(countTwo != 0)
        {
            temp->data = 2 ;
            countTwo--;
        }
        temp = temp->next;
    }
    return head;
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