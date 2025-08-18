#include<iostream>
#include<stack>
#include<queue>
using namespace std ;
queue<int> rev(queue<int> q)
{
    stack<int> s ;

    while(!q.empty())
    {
        int element = q.front();
        q.pop();
        s.push(element);
    }
    while(!s.empty())
    {
        int element = s.top();
        s.pop();
        q.push(element);
    }
    return q;
}
void printQueue(queue<int> q)
{
    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout << "Original Queue: ";
    printQueue(q);  

    q = rev(q);

    cout << "Reversed Queue: ";
    printQueue(q);
    return 0;
}