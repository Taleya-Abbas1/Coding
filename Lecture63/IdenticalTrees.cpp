#include<iostream>
using namespace std;
class node{
    public : 
  int data ;
  node* left ;
  node* right;
  node(int d)
  {
    this-> data = d;
    left = right = NULL ;
  }
  
};
bool CheckIdentical(node* r1 , node* r2)
{
    if(r1 == NULL && r2 == NULL)
    {
        return true;
    }
    if(r1 != NULL && r2 == NULL)
    {
        return false ;
    }
     if(r2 != NULL && r1 == NULL)
    {
        return false ;
    }

    bool right = CheckIdentical(r1->right, r2->right);
    bool left= CheckIdentical(r1->left, r2->left);

    bool currValue = r1 -> data = r2-> data ;

    if(right && left && currValue)
    {
        return true;
    }

    return false;
}
int main()
{
      node* r1 = new node(1);
      r1->left = new node(3);
      r1->right = new node(5);
      
      node* r2 = new node(1);
      r2->left = new node(3);
      r2->right = new node(5);

      if(CheckIdentical(r1, r2))
      {
          cout << "Both trees are identical";
      }
      else
      {
          cout << "Both trees are not identical";
      }

      return 0;
}