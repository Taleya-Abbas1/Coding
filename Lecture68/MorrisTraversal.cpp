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
Node* findPredecessor(Node* curr)
{
    Node* pred = curr->left;
    while(pred->right != NULL && pred->right != curr)
    {
        pred = pred->right;
    }
    return pred;
}
void morrisTraversal(Node* root)
{ 
    Node* curr = root ;
    Node* predecessor = NULL ;
    while(curr !=NULL)
    {
        if(curr->left == NULL)
        {
            cout << curr -> data<< " " ;
            curr = curr -> right;
        }
        else
        {
            predecessor =findPredecessor(curr);
            if(predecessor-> right == NULL)
            {
                predecessor->right = curr ;
                curr = curr->left;
            }
            else
            {
                predecessor->right = NULL;
                cout << curr->data << " ";
                curr = curr->right;
            }
        }
    }
}
int main()
{
   Node* root = new Node(1);
   root->left = new Node(2);
   root->right = new Node(3);
   root->left->left = new Node(4);
   root->left->right = new Node(5);
   root->left->left->right = new Node(7);
   root->right->right = new Node(6);
   morrisTraversal(root);
   return 0;
}