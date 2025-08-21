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

pair<bool,int> Solve(Node* root)
{
    if(root == NULL)
    {
         pair<bool,int>  p = make_pair(true,0);
         return p;
    }
    if(root->left == NULL && root -> right == NULL)
    {
         pair<bool,int>  p = make_pair(true,root->data);
         return p;  
    }
    pair<bool,int>  leftAns = Solve(root->left);
    pair<bool,int> rightAns = Solve(root->right); 
    bool left = leftAns.first;
    bool right = rightAns.first;
    bool condn = root-> data == leftAns.second + rightAns.second;
    pair<bool,int>  ans ;
    if(left && right && condn)
    {
        ans.first = true;
        ans.second = 2* root->data;
    }
    else
    {
        ans.first = false;
    }
    
    return ans;
}
bool isSumTree(Node* root)
{
   return Solve(root).first;
}
int main()
{
      Node* root = new Node(3);
      root->left = new Node(1);
      root->right = new Node(2);

      if(isSumTree(root))
      {
          cout << "Tree is Sum Tree" << endl;
      }
      else
      {
          cout << "Tree is not Sum Tree" << endl;
      }
      
}