#include<iostream>
using namespace std;
void ReverseArray(int arr[], int n)
{
    int start = 0 ;
    int end = n - 1;
    while(start<=end)
    {
        int temp = arr[start];
        arr[start] = arr[end];  
        arr[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
    ReverseArray(arr, n);
    
    cout << "\nReversed array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
    return 0;
}