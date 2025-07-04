#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1(4,2); // 4 means size and 2 means intiliazing each element with 2
    for(int i :v1)
    {
        cout << i<<" ";
    }
    cout << endl ;
    // Assigning one vector to another
    vector<int> v2(v1);
    cout << "Assigned vector:"<< endl;
    for(int i :v2)
    {
        cout << i<<" ";
    }
    cout << endl ;
    vector<int> v ;
    cout << " capacity->" << v.capacity() << endl; // Initial capacity of the vector
    v.push_back(1);
    cout << " capacity->" << v.capacity() << endl; // Capacity after adding one element
    v.push_back(2);
    cout << " capacity->" << v.capacity() << endl; // Capacity after adding another
    v.push_back(3);
    cout << " capacity->" << v.capacity() << endl; // Capacity after adding another
    cout << " Size->" << v.size() << endl; // Current size of the vector
    cout << " Element at index 2: " << v.at(2) << endl; // Accessing an element at index 1
    cout << " Empty or not: " << v.empty() << endl; // Checking if the vector is empty
    cout << " First element: " << v.front() << endl; // Accessing the
    cout << " Last element: " << v.back() << endl; // Accessing the last element
    for(int i :v)
    {
        cout << i << " "; // Printing all elements in the vector
    }
    cout << endl;
    v.pop_back(); // Removing the last element      
    for(int i:v)
    {
        cout << i << " "; // Printing all elements after popping the last element
    }

}