#include<iostream>
#include<map>
using namespace std ;
class Node{
    public :

  int data ;
  Node* left ;
  Node* right ;
  Node(int val){
    data = val ;
    left = NULL ;
    right = NULL ;
  }
};
int CreateMapping(int in[], int n , map<int,int> &nodeToIndex)  // this does it at O(1)
{
    for(int i = 0; i < n; i++)
    {
        nodeToIndex[in[i]] = i;
    }
    return 0;
}
int Position(int in[], int element , int n) // this takes O(n) on every call 
{
    for(int i = 0 ; i< n ; i++)
    {
        if(in[i] == element)
        {
            return i ;
        }
    }
    return -1;
}
Node* Solve(int in[], int p[], int &index , int InOrderStart , int InOrderEnd, int n , map<int,int> &nodeToIndex)
{ 
    // base case 
    if(index < 0 || InOrderStart > InOrderEnd)
    {
        return NULL ;
    }
    
    int element = p[index--];
    Node* root = new Node(element);
     int position = nodeToIndex[element];
  //  int position = Position(in, element ,n);
    root->right = Solve(in,p, index , position + 1 , InOrderEnd , n , nodeToIndex);
    root->left = Solve(in,p, index , InOrderStart,position - 1 , n , nodeToIndex);
  

    return root;
}
Node* buildTree(int in[], int p[], int n)
{
    int postOrderIndex = n -1 ;
    // create mapping
    map<int,int> nodeToIndex ;
    CreateMapping(in,n,nodeToIndex);
    Node* ans = Solve(in,p,postOrderIndex , 0 , n-1 , n,nodeToIndex);
    return ans;
}
  void preorderTraversal(Node* root)
  {
    if(root == NULL)
    {
      return ;
    }
     cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
   
  }
int main()
{
    int n ;
    cout << "Enter size->" ;
    cin >> n ;
    int in[n], p[n];
    cout << "Enter InOrder->" ;
    for(int i = 0 ; i< n ; i++)
    {
        cin >> in[i];
    }
    cout << "Enter PostOrder->" ;
    for(int i = 0 ; i< n ; i++)
    {
        cin >> p[i];
    }
    Node* root = buildTree(in,p,n);
    cout << "Tree constructed successfully." << endl;
    preorderTraversal(root);
    return 0;
}