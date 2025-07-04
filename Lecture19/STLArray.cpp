#include<iostream>
#include<array>

using namespace std;
int main()
{
   array<int, 5> arr = {12, 11, 13, 5, 6};
   int n = arr.size();  
   //printing the original array
   cout << "Original array: \n";
    for(int i = 0; i < n; i++)
    {
         cout << arr[i] << " ";
    cout << endl;
    }
    cout <<"Element at index 2: " << arr.at(2) << endl; // Accessing an element at index 2
    cout <<"Empty or not "<< arr.empty() << endl; // Checking if the array is empty
    cout <<"Fist element: " << arr.front() << endl; // Accessing the first element
    cout <<"Last element: " << arr.back() << endl; // Accessing the last

}