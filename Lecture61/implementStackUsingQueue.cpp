#include <iostream>
#include <queue>
using namespace std;

class Stack {
private:
    queue<int> q;

public:
    // Push element onto stack
    void push(int x) {
        q.push(x);
        // Rotate the queue to make last pushed element at front
        for (int i = 0; i < q.size() - 1; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    // Remove element from stack
    void pop() {
        if (q.empty()) {
            cout << "Stack is empty\n";
            return;
        }
        q.pop();
    }

    // Get top element
    int top() {
        if (q.empty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        return q.front();
    }

    // Check if stack is empty
    bool empty() {
        return q.empty();
    }
};

int main() {
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top: " << st.top() << endl; // 30
    st.pop();

    cout << "Top: " << st.top() << endl; // 20
    st.pop();

    cout << "Top: " << st.top() << endl; // 10
    st.pop();

    cout << "Is empty: " << (st.empty() ? "Yes" : "No") << endl;

    return 0;
}
