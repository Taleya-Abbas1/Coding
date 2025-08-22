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
vector<int> SpiralTraversal(Node* root)
{
    vector<int> result ;
    if(root == NULL)
    {
        return result ;
    }
    queue<Node*> q ; 
    q.push(root);
    bool leftToRight = true; // flag to determine the direction of traversal

    while(!q.empty())
    {
        int size = q.size();
        vector<int> ans(size);
         // process level  
        for(int i = 0; i< size ; i++)
        {
            Node*  frontNode = q.front();
            q.pop();

            int index =  leftToRight ? i: size - i - 1 ; 
            ans[index] = frontNode->data;
           
            if(frontNode->left)
            {
                q.push(frontNode->left);
            }
            if(frontNode->right)
            {
                q.push(frontNode->right);
            }
            // direction invert karne k liyee
            

        }
        leftToRight = !leftToRight;
            for(auto i : ans)
            {
                result.push_back(i);
            }
    }
    return result;
}
int main()
{
        Node* root = new Node(1);
        root->left = new Node(2);
        root->right = new Node(4);
        root->left->left = new Node(3);
        root->left->right = new Node(5);
        root->right->left = new Node(6);
        root->right->left->left = new Node(7);
        root->right->left->right = new Node(8);

       
        vector<int> result = SpiralTraversal(root);
        for(int i = 0; i < result.size(); i++)
        {
            cout << result[i] << " ";
        }
        return 0;
}