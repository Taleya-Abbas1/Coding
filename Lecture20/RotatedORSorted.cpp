#include<iostream>
using namespace std;
int CheckRotatedorSorted(int arr[], int n)
{
    int count = 0 ;
    for(int i = 1; i < n ; i++)
    {
        if(arr[i-1] > arr[i])
        {
            count++;
        }
    }
    if(arr[n-1] > arr[0])
    {
        count++;
    }
    return count;
}
int main()
{
    int arr[6] = {3, 4, 5, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    if(CheckRotatedorSorted(arr, n)<=1)
    {
        cout << "The array is rotated or sorted." << endl;
    }
    else
    {
        cout << "The array is not rotated or sorted." << endl;
    }
    return 0;
}