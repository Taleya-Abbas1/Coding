#include<iostream>
#include<stack>
using namespace std ;
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

void reverseStack(stack<int>&s)
{
    if(s.empty())
    {
        return ;
    }
    int top = s.top();
    s.pop();
    reverseStack(s);
    insertAtBottom(s, top);
  
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
    cout << "Original stack: ";
stack<int> temp = s;
while (!temp.empty()) {
    cout << temp.top() <<endl;
    temp.pop();
}
cout << endl;
    reverseStack(s);
    cout << "Reversed stack: ";
    while(!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
     }
     return 0;
}