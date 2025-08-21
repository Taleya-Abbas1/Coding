#include<iostream>
using namespace std;
class node{
    public : 
  int data ;
  node* left ;
  node* right;
  node(int d)
  {
    this-> data = d;
    left = right = NULL ;
  }
  
};
int height(node* Node )
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
int main()
{
      node* root = new node(1);
      root->left = new node(3);
      root->left->left = new node(7);
      root->left->right = new node(11);
      root->right = new node(5);
      root->right->left = new node(17);
      root->right->left->left = new node(13);

      int TreeHeight = height(root);

      cout << "Height of Tree is :" << TreeHeight << endl ;
}