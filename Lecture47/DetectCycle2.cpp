#include<iostream>
#include<map>
using namespace std;

class Node 
{
    public :
      int data ;
      Node* next ;

      //Constructor 
      Node(int data)
      {
        this -> data = data ;
        this -> next = NULL ;
      }

      // Destructor
      // It will free the memory of the node when it is deleted
      // This is called when the object goes out of scope or is deleted 
    
};
//Insertion Function 
void InsertAtHead(int data , Node* &Head)
{
    // create a new node 
    Node* temp = new Node(data);
    
    temp->next = Head ;
    Head = temp ;
}
void InsertAtTail(int data , Node* &tail)
{
    // create a new node 
    Node* temp = new Node(data);
    
    tail->next = temp ;
    tail = temp;
    // or u can write  tail = tail -> next 
}


// DO NOT create a cycle
// tail->next = Head->next; // REMOVE THIS

void Print(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
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
// another optimization is to use Floyd's Cycle Detection Algorithm
Node* FloydeCycleDectection(Node* head)
{
     if(head == NULL){
        return NULL ;
     }
     Node* fast = head ;
     Node* slow = head ;
     while(fast!= NULL && slow != NULL)
     {
         fast = fast -> next ;
         if(fast != NULL)
         {
             fast = fast -> next ;

         }
         slow = slow -> next ;
         if(fast == slow)
         {
             return slow;
         }
       
     }
       return NULL ;
}
Node* getStartingNode(Node* head)
{
    if(head == NULL)
    {
        return NULL;
    }
    Node* intersection = FloydeCycleDectection(head);
    Node* slow = head ;
    if(intersection == NULL)
    {
        return NULL; 
    }
    while(slow != intersection)
    {
        slow = slow -> next ;
        intersection = intersection -> next ;
    }
    return slow;
}
void RemoveLoop(Node* head)
{
    Node* startOfLoop = getStartingNode(head);
    Node* temp = startOfLoop;
    if(startOfLoop == NULL)
    {
        return; 
    }
    while( temp->next != startOfLoop)
    {
        temp = temp -> next ;
    }
    temp -> next = NULL;
}

int main()
{

    Node* node1 = new Node(10);
   
     
    Node* Head = node1 ;
    Node* tail = node1 ;
    

    InsertAtHead(20,Head );
    InsertAtHead(30,Head );
    InsertAtHead(40,Head );

    // Insert at tail 
     InsertAtTail(50,tail);
     InsertAtTail(60,tail);
     
    tail->next = Head -> next; // Creating a cycle for testing
 

    //Print(Head);
    if(DetectCycle(Head))
    {
        cout << "Cycle Detected" << endl;
    }
    else
    {
        cout << "No Cycle Detected" << endl;
    }
    if(FloydeCycleDectection(Head) !=NULL)
    {
        cout << "Cycle Detected using Floyd's Algorithm" << endl;
    }
    else
    {
        cout << "No Cycle Detected using Floyd's Algorithm" << endl;
    }

    Node* startingNode = getStartingNode(Head);
    if(startingNode != NULL)
    {
        cout << "Cycle starts at node with data: " << startingNode->data << endl;
    }
    else
    {
        cout << "No cycle found" << endl;
    }
    RemoveLoop(Head);
    if(DetectCycle(Head))
    {
        cout << "Cycle Detected" << endl;
    }
    else
    {
        cout << "No Cycle Detected" << endl;
    }

    return 0;
}

      
     


