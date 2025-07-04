#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l ;
   list<int> l1(4,100);
   cout << "List 1: " << endl;
    for(int i:l1)    
    {
        cout << i <<" "; // Printing the copied list
    }
    cout << endl;


    // copy the list into another
    
    
    l.push_back(1); // Adding an element to the end of the list
    l.push_front(2); // Adding an element to the front of the list
    // Printing the list
    list<int> l2(l); // Copying the list l into l2
    cout << "List 2: " << endl;
    for(int i:l)    
    {
        cout << i <<" ";
    }
    cout << endl;
    cout << "Copied list: " << endl;
    for(int i:l2)    
    {
        cout << i <<" "; // Printing the copied list
    }
    cout << endl;
    l.erase(l.begin()); // Erasing the first element of the list
    cout << "After Erase: " << endl;    
    for(int i:l)    
    {
        cout << i <<" "; // Printing the list after erasing the first element
    }
    cout << endl;
    cout << "Size of the list: " << l.size() << endl; // Printing the size of the list
}