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
int getLength(Node* head)
{
    int cnt = 0 ;
    
    while(head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}
Node* Middle(Node* Head)
{
    if(Head == NULL)
    {
        return NULL;
    }
    if(Head->next == NULL)
    {
        return Head;
    }
    if(Head->next->next == NULL)
    {
        return Head->next;
    }
    int len = getLength(Head);
    int ans = (len/2) + 1;
   
    Node* temp = Head;
    int cnt = 1 ;
    while(cnt< ans)
    {
        temp = temp -> next ;
        cnt++ ;
    }
    return temp;
}

int main()
{
    Node* node1 = new Node(4);
    Node* head= node1;
   InsertAtHead(3, head);
   InsertAtHead(2, head);
   InsertAtHead(1, head);
  
   Print(head);
    Node* middleNode = Middle(head);
   cout << "Middle Element: " << middleNode->data << endl;
  
}