#include<iostream>
using namespace std ;
class Node{
    public :
    int data ; 
    Node* left ;
    Node* right ;
    Node(int d)
    {
        this->data = d;
        left = right = NULL;
    }
};
int height(Node* Node )
{
    //base case
    if(Node == NULL)
    {
        return 0 ;
    }

    int left = height(Node->left);
    int right = height(Node->right);

    int ans = max(left,right) + 1;
    return ans ;
}
bool isBalanced(Node* node)
{
    // base case 
    if(node == NULL)
    {
        return true ;
    }

    bool left = isBalanced(node->left);
    bool right = isBalanced(node->right);

    bool diff = abs(height(node->left) - height(node->right)) <=1 ;

    if(left && right && diff)
    {
        return true ;
    }
    return false;
}
int main()
{
     Node* root = new Node(1);
     root->left = new Node(3);
     root->right = new Node(2);
     root->left->left = new Node(7);

     if(isBalanced(root))
     {
         cout << "Tree is Balanced" << endl;
     }
     else
     {
         cout << "Tree is not Balanced" << endl;
     }  
}