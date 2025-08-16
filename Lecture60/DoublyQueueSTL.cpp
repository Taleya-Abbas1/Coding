#include<iostream>
#include<queue>
using namespace std;
int main()
{
    deque<int> dq;
    dq.push_back(10);
    dq.push_front(20);
    dq.push_back(30);
    dq.push_front(40);
    cout << "Front Element: " << dq.front() << endl;
    cout << "Back Element: " << dq.back() << endl;
    cout << "Elements in the deque: ";
    for(int i=0; i<dq.size(); i++)
    {
        cout << dq[i] << " ";
    }
    cout << endl;
    return 0;
}