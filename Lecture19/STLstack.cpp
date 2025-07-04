#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string> s; // Creating a stack of strings
    s.push("Hello"); // Pushing "Hello" onto the stack  
    s.push("World"); // Pushing "World" onto the stack
    s.push("!"); // Pushing "!" onto the stack
     cout <<"Intial Size ->" << s.size() << endl ;
    cout<< "Top Element->"<< s. top() << endl; // Accessing the top element of the stack
   // we can't access the bottom element or any other elemnt except the top elment in the stack 
    s.pop();
         cout <<"After 1st pop Size->" << s.size() << endl ;
    cout<< "Top Element after pop->"<< s. top() << endl; // Accessing the new top element after popping the previous one
   
    s.push("C++"); // Pushing "C++" onto the stack
      cout <<"After pushing another size->" << s.size() << endl ;
    cout<< "Top Element after pushing ->"<< s. top() << endl;
   
    s.pop(); // Popping the top element
     cout <<"After poping new one size is->" << s.size() << endl ;
   
    s.pop();
     cout <<"After 2nd pop size->" << s.size() << endl ;

    cout<< "Top Element after pop->"<< s. top() << endl; // Accessing the new top element after popping
    cout <<"Is stack empty? " << (s.empty() ? "Yes" : "No") << endl; // Checking if the stack is empty
}