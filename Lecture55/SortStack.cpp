#include<iostream>
#include<stack>
// Sorting in descending order
using namespace std;
void    InsertedSort(stack<int> &s,int num){
    // base case 
    if(s.empty() || (!s.empty() && s.top() < num))
    {
        s.push(num);
        return ;
    }

    int n = s.top();
      s.pop();
    //recurive call
    InsertedSort(s, num);
    s.push(n);
}

void sortStack(stack<int> &s)
{
    //base case 
    if(s.empty())
    {
       return;
    }
    int num = s.top();
    s.pop();

    //recurive call
    sortStack(s);

    InsertedSort(s,num);
       
}

int main()
{
    stack<int> s;
    s.push(30);
    s.push(-5);
    s.push(18);
    s.push(14);
    s.push(-3);

    cout << "Stack before sorting: ";
    stack<int> temp = s; // Copy for display
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    sortStack(s);

    cout << "Stack after sorting: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0; 
}