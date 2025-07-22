#include<iostream>
using namespace std;
int  getSum(int *arr,int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i]; // Calculate the sum of the array elements
    }
    return sum; // Return the calculated sum
}
int main()
{
    // allocating a variable size array dynamically which is a good practice
     int n ;
     cin>> n ;
     int* arr = new int[n]; // Dynamically allocate an array of size n
     for(int i = 0; i < n; i++)
        {
            cin >> arr[i]; // Input elements into the array
        }
        // cout << "Elements of the array are: ";
        // for(int i = 0; i < n; i++)
        // {
        //     cout << arr[i] << " "; // Output elements of the array
        // }
        cout << "Sum of the array elements is: " << getSum(arr, n) << endl;
    
    }