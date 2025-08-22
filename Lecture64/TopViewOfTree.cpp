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

vector<int> ViewTopOfTree(Node* root)
{
      map<int, int> topNode; // hd -> node data
      vector<int> ans ;
      queue<pair<Node* ,int>> q ;
     //base case

      if(root == NULL)
      {
        return ans;
      }
       q.push(make_pair(root , 0));
      while(!q.empty())
      {
        pair<Node* ,int> temp = q.front();
        q.pop();
        Node* frontNode = temp.first ;
        int hd = temp.second ;

        if(topNode.find(hd) == topNode.end())
        {
            topNode[hd] = frontNode->data; // store the first node encountered at this hd
        }
        if(frontNode->left)
        {
            q.push(make_pair(frontNode->left , hd -1));
        }
        if(frontNode->right)
        {
            q.push(make_pair(frontNode->right , hd +1));
        }
        
      }

      for(auto i : topNode)
      {
          ans.push_back(i.second);
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
       vector<int> result = ViewTopOfTree(root) ;
       for(int i = 0; i<result.size();i++)
       {
           cout << result[i] << " " ;
       }
       cout << endl ;
       return 0 ;
        
}