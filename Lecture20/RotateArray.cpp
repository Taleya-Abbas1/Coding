#include<iostream>
using namespace std;
void RotateArray(int arr[], int n , int k)   
{    
    // int temp[n];
    // for(int i = 0; i < n; i++)
    // {
    //     temp[(i + k) % n] = arr[i];
    // }
    // for(int i = 0; i < n; i++)
    // {
    //     arr[i] = temp[i];
    // }
    int temp[n];
    int j = 1;
    while(j<=k)
   {
        int last = arr[n-1];
         for(int  i = 0 ;i < n ; i++)
       {
           temp[i+1] = arr[i];
       }
         temp[0] = last;
    j++;
  }
  
    for(int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}
int main()
{
    int arr[7]={1,2,3,4,5,6,7}; 
    cout << "Enter the number of rotations: ";
    int k;
    cin >> k;
    int n = sizeof(arr)/sizeof(arr[0]);
    RotateArray(arr, n, k);
    cout << "Rotated array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
