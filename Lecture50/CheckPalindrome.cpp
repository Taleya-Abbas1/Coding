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
bool isPalindrome(vector<int>& arr)
{
    int n = arr.size();
    int s = 0 ;
    int e = n - 1 ;
    while(s<e)
    {
        if(arr[s]!= arr[e])
        {
            return false;
        }
        s++ ;
        e--;

    }
    return true;
}
bool Palindrome(Node* head)
{
     vector<int> arr ;

     Node* temp = head ;
     while(temp != NULL)
     {
        arr.push_back(temp->data);
        temp = temp -> next ;
     }
   return isPalindrome(arr);
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