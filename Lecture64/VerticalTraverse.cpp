
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

vector<int> VerticalTaversal(Node* root)
{
      // mapping to store hd and levelwise node-> list if nodes(vector<int>)
      map<int, map<int,vector<int>>> nodes ;
      // make queue in which Nodes and hd , level pair required 
      queue<pair<Node* , pair<int,int>>> q ;
      vector<int> ans ;
     //base case
      if(root == NULL)
      {
        return ans;
      }
      q.push(make_pair(root,make_pair(0,0)));
      while(!q.empty())
      {
        pair<Node* , pair<int,int>> temp = q.front();
        q.pop();
        Node* frontNode = temp.first;

        
        int hd = temp.second.first ;
        int lvl = temp.second.second;
        
        nodes[hd][lvl].push_back(frontNode->data);

        if(frontNode->left)
        {
            q.push(make_pair(frontNode->left,make_pair(hd-1,lvl+1)));

        }
        if(frontNode->right)
        {
            q.push(make_pair(frontNode->right,make_pair(hd+1,lvl+1)));

        }
        
      }
      for(auto i : nodes)
        {
              for(auto j :i.second)
              {
                  for(auto k : j.second)
                  {
                    ans.push_back(k);
                  }
              }
        }
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
       vector<int> result = VerticalTaversal(root);
       for(int i = 0; i<result.size();i++)
       {
           cout << result[i] << " " ;
       }
       cout << endl ;
       return 0 ;
        
}