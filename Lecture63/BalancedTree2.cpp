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
pair<bool,int> isBalancedFast(Node* node)
{
    // base case 
    if(node == NULL)
    {
        pair<int,bool> p = make_pair(true,0);
        return p ;
    }

     pair<int,bool> left = isBalancedFast(node->left);
     pair<int,bool> right = isBalancedFast(node->right);

     bool leftAns = left.first;
    bool rightAns = right.first;
    bool  diff = abs(left.second - right.second) <=1 ;
     pair<int,bool> ans ;
     ans.second = max(left.second, right.second) + 1;
    if(leftAns && rightAns && diff)
    {
        ans.first = true;
    }
    else
    {
        ans.first = false;
    }
    return ans;
}
bool isBalanced(Node* root)
{
    return isBalancedFast(root).first;
}
int main()
{

}