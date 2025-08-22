#include<iostream>
#include<vector>
#include<queue>
#include<map>
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
void  Solve(Node* root , int level ,vector<int> & ans)
{
   if(root == NULL)
   {
       return ;
   }
   if(level == ans.size())
   {
       ans.push_back(root->data);
   }
   Solve(root->left , level + 1 , ans);
   Solve(root->right , level + 1 , ans);
}
vector<int> ViewLeftOfTree(Node* root)
{
   vector<int> ans;
   Solve(root, 0, ans);
   return ans;
}

     
int main()
{
        Node* root = new Node(1);
        root->left = new Node(2);
        root->left->left = new Node(4);
        root->left->right = new Node(5);

        root->right = new Node(3);
        root->right->left = new Node(6);
        root->right->right = new Node(7);
        root->right->left->right = new Node(8);
        root->right->right->right = new Node(9);
       vector<int> result = ViewLeftOfTree(root) ;
       for(int i = 0; i<result.size();i++)
       {
           cout << result[i] << " " ;
       }
       cout << endl ;
       return 0 ;
        
}