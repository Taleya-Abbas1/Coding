#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int>&s, int x )
{
    if(s.empty())
    {
        s.push(x);
        return ;
    }
    int top = s.top();
    s.pop();
    insertAtBottom(s,x);

    s.push(top);
}

int main()
{
    stack<int> s;
    cout << "Give the size of the stack: ";
    int n;
    cin >> n;
    cout << "Give the elements of the stack: ";
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }
    int x;
    cout << "Give the element to insert at the bottom: ";
    cin >> x;
    insertAtBottom(s,x);
    cout << "Stack after insertion: ";
    while(!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}