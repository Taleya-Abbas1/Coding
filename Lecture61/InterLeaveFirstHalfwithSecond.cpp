#include<iostream>
#include<stack>
#include<queue>
using namespace std;
queue<int> Interleave(queue<int> q )
{
    stack<int> s;
    int n = q.size();
    // step 1 : push first half elements into stack
    for(int i = 0 ; i< n/2 ; i++)
    {
        int val = q.front();
        q.pop();
        s.push(val);
    }
    // step 2 : push back into queue
    for(int i = 0 ;  i<n/2 ;i++)
    {
        int val = s.top();
        s.pop();
        q.push(val);
    }
    // step 3 : pop first half from queue and push it into queue
    for(int i = 0 ; i< n/2 ; i++)
    {
        int val = q.front();
        q.pop();
        q.push(val);
    }
    // step 4 : push first half elements into stack
    for(int i = 0 ; i< n/2 ; i++)
    {
        int val = q.front();
        q.pop();
        s.push(val);
    }
    // step 5 : interleave 
    while(!s.empty())
    {
        int val =s.top();
        s.pop();
        q.push(val);
         val = q.front();
        q.pop();
        q.push(val);
    }
    return q;
}
int main()
{
    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);
    q = Interleave(q);
    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}