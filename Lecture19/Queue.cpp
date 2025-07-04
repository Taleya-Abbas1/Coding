#include<iostream>
using namespace std;
#include<queue>
int main()
{
    queue<string> q; 
     q.push("Hello"); // Pushing "Hello" onto the stack  
    q.push("World"); // Pushing "World" onto the stack
    q.push("!"); // Pushing "!" onto the stack
     cout <<"Intial Size ->" << q.size() << endl ;
    cout<< "Top Element->"<< q.front() << endl; // Accessing the top element of the stack
   // we can't access the bottom element or any other elemnt except the top elment in the stack 
    q.pop();
         cout <<"After 1st pop Size->" << q.size() << endl ;
    cout<< "Top Element after pop->"<< q.front() << endl; // Accessing the new top element after popping the previous one
   
    q.push("C++"); // Pushing "C++" onto the stack
      cout <<"After pushing another size->" << q.size() << endl ;
    cout<< "Top Element after pushing ->"<<  q.front() << endl;
   
    q.pop(); // Popping the top element
     cout <<"After poping new one size is->" << q.size()  << endl ;
     cout<< "Top Element after pop->"<<  q.front()<< endl;
    q.pop();
     cout <<"After 2nd pop size->" <<q.size()  << endl ;

    cout<< "Top Element after pop->"<<  q.front()<< endl; // Accessing the new top element after popping
    cout <<"Is stack empty? " << (q.empty() ? "Yes" : "No") << endl; // Checking if the stack is empty
    q.pop(); // Popping the last element
    cout <<"After popping the last element size->" << q.size() << endl; // Checking the size after popping the last element
    cout <<"Is stack empty? " << q.empty() << endl; // Checking if the stack is empty
}