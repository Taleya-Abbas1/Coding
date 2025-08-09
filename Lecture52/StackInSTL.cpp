#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl;

    s.pop();
    cout << "Top element after pop: " << s.top() << endl;

    s.empty()?cout <<"Stack is empty " : cout << "Stack is not empty";
    cout << "size of stack is: " << s.size();
    return 0;
}