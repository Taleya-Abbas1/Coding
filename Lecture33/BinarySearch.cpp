#include<iostream>
using namespace std;
// 1st approach

// bool binarySearch(int arr[],int size , int key)
// {
//     int start = 0 ;
//     int end = size - 1 ;
//     int mid =  (start + end) / 2;
//     //base case
//     if(size == 0)
//     {
//         return 0 ;
//     }
//     if(arr[mid] == key)
//     {
//         return 1;
//     }
//     else if(arr[mid] < key)
//     {
//         start = mid + 1;
//     }
//     else
//     {
//         end = mid - 1;
//     }
//     return binarySearch(arr + start, end - start + 1, key);
// }

// 2nd approach
bool binarySearch(int arr[],int start , int end , int key)
{
    int mid =  (start + end) / 2;
    //base case
    if(start > end)
    {
        return 0 ;
    }
    if(arr[mid] == key)
    {
        return 1;
    }
    else if(arr[mid] < key)
    {
        start = mid + 1;
    }
    else
    {
        end = mid - 1;
    }
    return binarySearch(arr , start , end , key);
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    int s = 0 ;
    int e = 5 -1 ;
    int key;
    cout << "Enter the key to search: ";
    cin >> key;
    int size = 5 ;
    bool result = binarySearch(arr, s, e, key);
    if(result)
    {
        cout << "Key found in the array." << endl;
    }
    else
    {
        cout << "Key not found in the array." << endl;
    }
    return 0 ;
}