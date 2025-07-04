#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s ;
    s.insert(1); // Inserting elements into the set
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    for(auto i : s)
    {
        cout << i << " "; // Printing all elements in the set
    }
    cout << endl;
    // if we try to insert duplicate elements, they will not be added
    s.insert(2);
    s.insert(3);
    s.insert(2);
    s.insert(3);
    cout << "After trying to insert duplicates: " << endl;
    for(auto i : s)
    {
        cout << i << " "; // Printing all elements after trying to insert duplicates
    }
    cout << endl;

    // erase an elment

    // making iterator fo a set 
    set<int>::iterator it = s.begin(); // Creating an iterator to the beginning of the set
   it++;


    s.erase(it); // for erasing the first element
    cout << "After erasing the first element: " << endl;


    s.erase(3); // Erasing the element 3 from the set
    cout << "After erasing 3: " << endl;


    for(auto i : s)
    {
        cout << i << " "; // Printing all elements after erasing 3
    }
    cout << endl;

    cout << "Is 5 present in set ->" << s.count(2) << endl; // Checking if 5 is present in the set

     cout << "Size of the set -> " << s.size() << endl; // Printing the size of the set
   
    set<int>::iterator it2 = s.find(4);
   cout << "Value present at iterator it2 -> " << *it2 << endl; // Finding the value at iterator it2
    for(auto it = it2; it != s.end(); it++)
    {
        
        cout << *it << " "<< endl; // Printing all elements from iterator it2 to the end of the set
    }

 
    // Because each element in a set is a node in a tree, and removing other nodes (2, 3) doesn't invalidate or shift 4 like it would in a vector.
    //~~~~~Important point~~~~~
    // Because each element in a set is a node in a tree, and removing other nodes (2, 3) doesn't invalidate or shift 4 like it would in a vector.
}