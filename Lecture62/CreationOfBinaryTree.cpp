#include<iostream>
#include<queue>
using namespace std ;
class node{
    public :
  int data ;
  node* right ;
  node* left ;

  node(int data)
  {
      this->data = data;
      this->right = NULL;
      this->left = NULL;
  }

  node* BuildTree(node* root)
  {
      int data ;
      cout << "Enter the data for root :" << endl ;
      cin >> data ;
      root = new node(data);
      if(data == -1 )
      {
        return NULL ;
      }
      cout << "Enter the data for inserting in left of :" << data<< endl ;
      root-> left = BuildTree(root->left);
      cout << "Enter the data for inserting in right of :" << data<< endl ;
      root-> right = BuildTree(root->right);
      return root;
  }
  void LevelOrderTraversal(node* root)
  {
    queue<node*> q ;
    q.push(root);
    q.push(NULL); // to mark the end of the current level
    while(!q.empty())
    {
    node* temp = q.front();
  
     q.pop();
     if(temp == NULL)
     {
        cout << endl ;
        if(!q.empty()) // if queue is not empty, push NULL to mark the next level
        {
            q.push(NULL);
        }
     }
     else
     {
      cout << temp->data << " ";
     if(temp->left)
     {
        q.push(temp->left);
     }
     if(temp->right)
     {
        q.push(temp->right);
     }
    }
  }
  }


  void inorderTraversal(node* root)
  {
    if(root == NULL)
    {
      return ;
    }
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
  }
  void preorderTraversal(node* root)
  {
    if(root == NULL)
    {
      return ;
    }
    cout << root->data << " ";
    preorderTraversal(root->left);
    
    preorderTraversal(root->right);
  }
  void postorderTraversal(node* root)
  {
    if(root == NULL)
    {
      return ;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
  }

  void createTreeFromOrderLevelTraversal(node* &root)
  {
    queue<node*> q ;
    int data ;
    cout << "Enter the data for root :" << endl ;
    cin >> data ;
    root = new node(data);
    q.push(root);
    while(!q.empty())
    {
       node* temp = q.front();
       q.pop();
       int Leftdata;
       cout << "Enter the data for  Left of :"<< temp-> data << endl ;
       cin >> Leftdata ;
       if(Leftdata != -1)
       {
       temp-> left = new node(Leftdata);
       q.push(temp-> left);
       }
       int rightdata;
       cout << "Enter the data for right of :"<< temp-> data << endl ;
       cin >> rightdata ;
       if(rightdata != -1)
       {
       temp-> right = new node(rightdata);
       q.push(temp-> right);
       }

    }
  }
};
int main()
{
    node* root = NULL ;

    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    root->createTreeFromOrderLevelTraversal(root);
    root->LevelOrderTraversal(root);
    /// create a tree
    root = root->BuildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1  --- input dyna
    //level order
    cout << "Level Order Traversal of the Binary Tree is :" << endl;
    root->LevelOrderTraversal(root);
    cout<< "Inorder Traversal of the Binary Tree is :" << endl;
    root->inorderTraversal(root);
    cout<< endl ;
    cout<< "Preorder Traversal of the Binary Tree is :" << endl;
    root->preorderTraversal(root);
    cout<< endl ;
    cout<< "Postorder Traversal of the Binary Tree is :" << endl;
    root->postorderTraversal(root);
    

   
}
