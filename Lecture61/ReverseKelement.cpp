#include<iostream>
#include<stack>
#include<queue>
using namespace std;
queue<int> ReverseFirstK_elements(queue<int> q, int k)
{
      stack<int> s ;
      //push k elements into stack and pop them from queue
      for(int i = 0 ; i< k ; i++)
      {
        int val = q.front();
        q.pop();
        s.push(val);
      }
     // pop reverse element from stack and push them into queue
      while(!s.empty())
      {
        int val = s.top();
        s.pop();
        q.push(val);
      }
     // fetch n -k element and push them to back of queue
      int t = q.size() - k;
      while(t > 0)
      {
        int element = q.front();
        q.pop();
        q.push(element);
        t-- ;
      }
      return q ;
}
void PrintQueue(queue<int> q)
{
  while(!q.empty())
  {
    cout << q.front() << " " ;
    q.pop();
  }
  cout << endl ;
}
int main()
{
     int k ;
     cout << " Enter k -> ";
     cin >> k ;

     queue<int> q ;
      q.push(1);
      q.push(2);
      q.push(3);
      q.push(4);
      q.push(5);
     
     
      cout << "Original queue :" ;
      PrintQueue(q);
      q  = ReverseFirstK_elements(q,k);
      cout << "Reversed queue :" ;
      PrintQueue(q);

}
