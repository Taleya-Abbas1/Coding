#include<iostream>
#include<queue>
#include<map>
class Node{
  public :
  int data ;
  Node* right ;
  Node* left ;
  Node(int val)
  {
 this-> data = val;
 left = NULL;
 right = NULL;
  }
};
using namespace std ;
Node* createMapping(Node* root ,int target, map<Node*,Node* > & nodeToParent)
{
    
    queue<Node*> q ;
    Node* res = NULL;
    q.push(root);
    nodeToParent[root] = NULL;
    while(!q.empty())
    {
        Node* front = q.front();
        q.pop();
        if(front->data == target)
        {
            res = front ;
        }
        if(front->left)
        {
            nodeToParent[front->left] = front ;
            q.push(front->left);
        }
        if(front->right)
        {
            nodeToParent[front->right] = front ;
            q.push(front->right);
        }
    }
    return res ;

}
int  BurnTree(Node* root ,map<Node*,Node*>& nodeToParent)
{
    map<Node* ,bool > visited ;
    queue<Node*> q ;
    q.push(root);
    int ans = 0 ;
    while(!q.empty())
    {
        int size = q.size();
        bool flag = 0 ;
        for(int i =  0 ; i< size ; i++)
        {
            Node* front = q.front();
            q.pop();
            if(front->left && !visited[front->left])
            {
                flag = 1 ;
                 q.push(front->left);
                visited[front->left] = true ;
               

            }
             if(front->right && !visited[front->right])
            {
                flag = 1 ;
                 q.push(front->right);
                visited[front->right] = true ;
               
            }
            if(nodeToParent[front] && !visited[nodeToParent[front]])
            {
                flag = 1 ;
                  q.push(nodeToParent[front]);
                visited[nodeToParent[front]] = true;
              
            }
        }
        if(flag ==1)
        {
            ans++ ;
        }
    }
    return ans ;

}
int minTime(Node* root , int target )
{
   

    map<Node*,Node*> nodeToParent ;
    Node* targetNode = createMapping(root,target,nodeToParent);
   int ans = BurnTree(targetNode,nodeToParent);

    return ans ;
}
int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(7); 
    root->left->right->right = new Node(8);
    
    root->right = new Node(3);
    root->right->right = new Node(6);
    root->right->right->right  = new Node(9);
    root->right->right->right->right  = new Node(10);

    int target = 8;
    int time = minTime(root, target);
    cout << "Minimum time to burn the tree from target " << target << " is: " << time << " seconds." << endl;

    return 0;
}