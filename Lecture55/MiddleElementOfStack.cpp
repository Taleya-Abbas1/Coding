#include<iostream>
#include<stack>
using namespace std ;
void Solve(stack<int>&s , int size , int count)
{
    // base case
    if(count == size/2)
    {
        s.pop();
        return ;
    }

    int num = s.top();
    s.pop();
    Solve(s,size,count+1);
    s.push(num);
}

int main()
{
    stack<int> s;
    int n ;
    cout << "Give the size of stack ->" ;
    cin >> n ;
    // Pushing elements onto the stack
    for(int i = 1 ; i<= n; i++)
    {
        cout << "Enter the Element " << i << " -> ";
        int element;
        cin >> element;
        s.push(element);
    }
   int count = 0 ;
    Solve(s,n,count);
    for(int i = 1 ; i<= n; i++)
    {
        cout << s.top() << " ";
        s.pop();
    }

}