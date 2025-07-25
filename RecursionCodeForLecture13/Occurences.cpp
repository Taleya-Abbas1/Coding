#include<iostream>
using namespace std;
// we can use binary search to find the first and last occurrence of an element in a sorted array and then
// calculate the total occurrences by subtracting the indices of first and last occurrences.
// Total occurrences = Last occurrence index - First occurrence index + 1

int TotalOcuurences(int arr[], int s , int e , int key )
{
   int mid = s +(e-s)/2;
    // base case
    if(s > e)
    {
        return 0;
    }
    if(arr[mid] == key)
    {
        return 1 + TotalOcuurences(arr, s, mid - 1, key) + TotalOcuurences(arr, mid + 1, e, key);
    }
    else if(arr[mid] < key)
    {
        return TotalOcuurences(arr, mid + 1, e, key);
    }
    else
    {
        return TotalOcuurences(arr, s, mid - 1, key);
    }
    
}
int main()
{
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 2;
    
    int totalOccurrences = TotalOcuurences(arr, 0, n - 1, key);
    
    cout << "Total occurrences of " << key << " is: " << totalOccurrences << endl;
    
    return 0;
}