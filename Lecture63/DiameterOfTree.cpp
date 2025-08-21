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
pair<int,int> diameterFast(node* node)
{
   //base case
    if(node == NULL)
    {
        pair<int,int> p = make_pair(0,0);
        return p;
    }
    pair<int,int> left = diameterFast(node->left);  
    pair<int,int> right = diameterFast(node->right);
    int op1 = left.first;
    int op2 = right.first ;
    int op3 = left.second+ right.second + 1 ;
    
    pair<int,int> ans ;
    ans.first =  max(op1,max(op2,op3));
    ans.second = max(left.second , right.second) + 1;

    return ans;
}
int diameter(node* Node)
{
    //base case
    if(Node == NULL)
    {
        return 0 ;
    }

    int op1 = diameter(Node->left);
    int op2 = diameter(Node->right);
    int op3 = height(Node->left) + height(Node->right)+1;

    int ans = max(op1,max(op2,op3));
    return ans;
}
int main()
{
      node* root = new node(1);
      root->left = new node(3);
      root->left->left = new node(7);
      root->left->right = new node(11);
      root->left->right->left = new node(19);
      root->right = new node(5);
      root->right->left = new node(17);
      root->right->right = new node(23);
      root->right->left->left = new node(13);

      int TreeHeight = height(root);
      int TreeDiameter = diameter(root);

      cout << "Height of Tree is :" << TreeHeight << endl ;
      cout << "Diameter of Tree is :" << TreeDiameter << endl ;
}