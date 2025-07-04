#include<iostream>
#include<deque>
using namespace std ;

int main()
{
   deque<int> d ;
   d.push_back(1);
   d.push_front(2);

   // printing the deque
   for(int i:d)
   {
     cout << i <<" ";
   }
   cout << endl ;
//    d.pop_back();
//    cout << "After popping from back :"<< endl ;
//    for(int i:d)
//    {
//      cout << i <<" ";
//    }
//    cout << endl ;


//   d.pop_front();
//    cout << "After popping from front:"<< endl ;
//    for(int i:d)
//    {
//      cout << i <<" ";
//    }
//    cout << endl ;

cout << "Printing the first element: " << d.front() << endl; // Accessing the first element
cout << "Printing the  element: " << d.back() << endl; // Accessing


cout<< "Element at index 1: " << d.at(1) << endl; // Accessing an element at index 1
cout << "Empty or not: " << d.empty() << endl; // Checking if the deque is empty

cout << "Before Erase: " << d.size() << endl; 
d.erase(d.begin(), d.begin() + 1); // Erasing the second element
cout << "After Erase: " << d.size() << endl;
cout << "Printing the deque after erase: " << endl;
for(int i:d)
   {
     cout << i <<" ";
   }
   cout << endl ;
}