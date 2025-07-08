#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()

{
    vector<int> v ;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    // to find 6 , we want to apply binary search
    cout << "Finding 6 :"<< binary_search(v.begin(), v.end(), 6) << endl; // This will return 1 (true) if 6 is found, otherwise 0 (false)

    //Taking itreator to find 6
    cout << "lower_bound of 6 -> " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl; // This will return the index of the first element that is not less than 6
    cout << "upper_bound of 6 -> " << upper_bound(v.begin(), v.end(), 6) - v.begin() << endl;

    int a = 3;
    int b = 5 ;

    //Print max
   cout << "Max of a and b -> " << max(a, b) << endl; // This will print the maximum of a and b
    //Print min
   cout << "Min of a and b -> " << min(a, b) << endl; // This will print the minimum of a and b
    //Swapping a and b
   swap(a, b); // This will swap the values of a and b
    cout << "After swapping, a -> " << a << " and b -> " << b << endl; // This will print the values of a and b after swapping
    
     //Reversing the vector
     string abcd ="abcd";
     reverse(abcd.begin(), abcd.end()); // This will reverse the elements in the vector v
     cout << "Reversed vector: ";
     for(auto i : abcd) {
          cout << i << " "; // This will print the elements of the reversed vector
     }
     cout << endl;
    
     //Rotating the vector
     rotate(v.begin(), v.begin() + 1, v.end()); // This will rotate the elements in the vector v
     cout << "Rotated vector: ";    
        for(auto i : v) {
            cout << i << " "; // This will print the elements of the rotated vector
        }
     //Sorting the vector
     //here implementation of sorting  is based on introSort made by threee alogos "quiksort, heap sort and insertion sort"
    
        //Sorting the vector
        //sort(v.begin(), v.end()); // This will sort the elements in the vector v
       sort(v.begin(), v.end()); // This will sort the elements in the vector v
        cout << "\nSorted vector: ";
        for(auto i : v) {
            cout << i << " "; // This will print the elements of the sorted vector
        }
     return 0;
}