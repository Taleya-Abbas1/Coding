#include<iostream>
#include<map>
using namespace std ;
class Node
{
 public :
      int data ;
      Node* prev ;
      Node* next ;

      //Constructor 

      Node(int data)
      {
        this -> data = data ;
        this -> next = NULL ;
        this->prev = NULL ;
      }
  
};
void InsertNode(Node* &tail , int element,int data )
{  
    // empty list 
    if(tail== NULL)
    {
        Node* newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode ;
    }
    else
    {
     Node* curr = tail ;
    while(curr-> data !=element)
    {
        curr = curr->next ;
    }
   Node* temp = new Node(data);
    temp->next = curr->next ;
    curr->next = temp ;
  }
}

void Print(Node* &tail)
{
    if(tail==NULL)
    {
        cout << "List is empty" << endl;
        return ;
    }
     Node* temp = tail ;
    do
    {
      cout << tail->data << " " ;
      tail = tail->next ;
    }while(tail!= temp);
    cout << endl ;
}
bool isCircular(Node* head)
{
    if(head == NULL)
    {
        return true ;
    }
    if(head-> next == NULL)
    {
        return false ;
    }
    Node* temp = head-> next  ;
    while(temp != NULL && temp != head)
    {
        temp = temp-> next ;
    }
    if(temp== head)
    {
        return true ;
    }
    if(temp == NULL)
    {
        return false ;
    }

}
bool DetectCycle(Node* head )
{
    if(head == NULL)
    {
        return false ;
    }
    map<Node*,bool> visited;
    Node* temp = head ;
    while(temp != NULL)
    {
       if(visited[temp] == true)
       {
        return 1 ;
       }
       visited[temp] = true ;
       temp = temp -> next ;
    }
    return 0 ;
}


int main()
{

    Node* tail = NULL ;
    InsertNode(tail, 5, 10);
    InsertNode(tail, 10, 20);
    InsertNode(tail, 20, 30);
    InsertNode(tail, 30, 40);
    InsertNode(tail, 40, 50);
    Print(tail);

        // if(isCircular(tail))
        // {
        //     cout << "The linked list is circular" << endl;
        // }
        // else
        // {
        //     cout << "The linked list is not circular" << endl;
        // }

    if(DetectCycle(tail))
    {
        cout << "Cycle detected in the linked list" << endl;
    }
    else
    {
        cout << "No cycle detected in the linked list" << endl;
    }

   }