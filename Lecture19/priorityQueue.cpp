#include<iostream>
#include<queue>
using namespace std;
int main()
{
    // max heap 
    priority_queue<int> maxi ;
    // min heap 
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    int n = maxi.size();
    for(int i = 0 ; i < n ; i++)
    {
        cout << maxi.top() << " "; // Accessing the top element of the max heap
        maxi.pop(); // Popping the top element
    }
    cout << endl;

    mini.push(1);
    mini.push(3);   
    mini.push(2);
    mini.push(0);
    int m = mini.size();
    for(int i = 0 ; i < m ; i++)
    {
        cout << mini.top() << " "; // Accessing the top element of the min heap
        mini.pop(); // Popping the top element
    }

    cout <<" khali hai ya nahi? " << (maxi.empty() ? "Yes" : "No") << endl; // Checking if the max heap is empty
    cout <<" khali hai ya nahi? " << (mini.empty() ? "Yes" : "No") << endl; // Checking if the min heap is empty
}