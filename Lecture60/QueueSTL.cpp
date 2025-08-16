#include<iostream>
#include<queue>
using namespace std ;
int main()
{
    queue<int> q ;
    cout << "Is Empty :" << q.empty() << endl;
    q.push(1);
    q.push(2);
    q.push(5);
    q.push(8);
    cout << "size ->" << q.size() << endl;  
    cout << "Is Empty :" << q.empty() << endl;
    cout << " Front Element :" << q.front() << endl;
    cout << "----After popping-----" << endl;
    q.pop();
    cout << " Front Element :" << q.front() << endl;
    cout << "size ->" << q.size() << endl;  
    int size = q.size();
    for(int i = 0; i < size; i++)
    {
        cout << q.front() << " ";
        q.pop();
    }

}