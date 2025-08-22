//spiral traversal
#include<iostream>
#include<vector>
#include<queue>
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
void LeftTraverse(Node* root , vector<int> &ans )
{
    // base case 
    if(root == NULL || (root->left == NULL && root->right == NULL))
    {
        return ;
    }
    ans.push_back(root->data);
    if(root->left)
    {
        LeftTraverse(root->left,ans);
    }
    else
    {
        LeftTraverse(root->right,ans);
    }
}
void RightTraverse(Node* root , vector<int> &ans )
{
    // base case 
    if(root == NULL || (root->left == NULL && root->right == NULL))
    {
        return ;
    }
 
    if(root->right)
    {
        RightTraverse(root->right,ans);
    }
    else
    {
        RightTraverse(root->right,ans);
    }
      // wapis jaty hoe  print kro
      ans.push_back(root->data);
}
void TraverseLeaf(Node* root , vector<int> &ans )
{
    // base case 
    if(root == NULL )
    {
        return ;
    }
    if(root->left == NULL && root->right == NULL)
    {
            ans.push_back(root->data);
            return ;
    }
    
        TraverseLeaf(root->left,ans);
        TraverseLeaf(root->right,ans);
    
}
vector<int> BoundaryTraversal(Node* root)
{
    vector<int> ans ;
    //base case
    if(root == NULL)
    {
        return ans ;
    }

    ans.push_back(root->data);

    //left part store kro 
    LeftTraverse(root->left,ans);

    //Traverse Leaf nodes
    //1)
    //left subtree

    TraverseLeaf(root->left , ans );
    
    //2)
    //right subtree
    TraverseLeaf(root->right , ans ); 

    //right part store kro
    RightTraverse(root->right,ans);

    return ans ;

  
}
int main()
{
        Node* root = new Node(1);
        root->left = new Node(2);
        root->left->left = new Node(3);
        root->left->right = new Node(5);
        root->left->right->left = new Node(6);
        root->left->right->right = new Node(8); 

        root->right = new Node(4);
        root->right->right = new Node(7);
        root->right->right->right = new Node(9);
        root->right->right->right->right = new Node(11);
        root->right->right->right->left = new Node(10);

       vector<int> result = BoundaryTraversal(root);
       for(int i = 0; i<result.size();i++)
       {
           cout << result[i] << " " ;
       }
       cout << endl ;
       return 0 ;
        
}