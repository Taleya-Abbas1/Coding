#include<iostream>
using namespace std ;
class Node{
 public : 
 int data ;
 Node* right ;
 Node* left ;

 Node(int val)
 {
    this->data = val ;
    left = right = NULL ;
 }
};

void FlattenTree(Node* root)
{ 
    Node* curr = root ;
    Node* prev = NULL;
    while(curr!= NULL)
    {
        if(curr->left != NULL)
        {
            prev = curr -> left ;
            while(prev->right != NULL)
            {
                prev = prev -> right ;
            }
            prev->right = curr->right ;
            curr->right = curr->left ;
            curr->left = NULL ;
        }
        curr = curr->right;

        
    }
     
}
void PrintFlattenedList(Node* root)
{
    Node* curr = root;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->right;
    }
}
int main()
{
   Node* root = new Node(1);
   root->left = new Node(2);
   root->right = new Node(5);
   root->right->right = new Node(6);
   root->left->left = new Node(3);
   root->left->right = new Node(4);
   FlattenTree(root);
   PrintFlattenedList(root);
   return 0;
}