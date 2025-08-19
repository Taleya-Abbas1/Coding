#include<iostream>
using namespace std ;
template <typename T>
class BinaryTreeNode{
    public:
   T data ;
   BinaryTreeNode<T> *left ;
   BinaryTreeNode<T> *right ;

   BinaryTreeNode(T data)
   {
    this->data = data ;
    this->left = NULL ;
    this->right= NULL;
   }
   void inorderTraversal(BinaryTreeNode<int> *root , int &count)
   {
      if(root == NULL)
      {
        return ;
      }
      inorderTraversal(root->left,count);
      if(root->left == NULL && root->right == NULL)
      {
          count++;
      } 
      inorderTraversal(root->right,count);


   }
   int countLeafNodes(BinaryTreeNode<int> *node)
   {
     int count = 0;
     inorderTraversal(node, count);
     return count;
   }
};
int main()
{
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(1);
    root->left = new BinaryTreeNode<int>(2);
    root->right = new BinaryTreeNode<int>(3);
    root->left->left = new BinaryTreeNode<int>(4);
    root->left->right = new BinaryTreeNode<int>(5);
    root->right->left = new BinaryTreeNode<int>(6);

    int leafCount = root->countLeafNodes(root);
    cout << "Number of leaf nodes: " << leafCount << endl;
    
    return 0;
}
