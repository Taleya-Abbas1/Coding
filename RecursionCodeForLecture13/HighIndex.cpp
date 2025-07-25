#include<iostream>
using namespace std;
int highIndexInmountainArray(int arr[],int s , int e)
{
   int mid = (s + e) / 2;
   // base case 
   if( s> e)
   {
     return 0 ;
   }
   if(arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
   {
       return mid;
   }
   else if(arr[mid] > arr[mid - 1])
   {
       return highIndexInmountainArray(arr, mid + 1, e);
   }
   else
   {
       return highIndexInmountainArray(arr, s, mid - 1);
   }
}

int main()
{
   int arr[4] = {3,4,5,1};
   int n = sizeof(arr) / sizeof(arr[0]);
    int index = highIndexInmountainArray(arr, 0, n - 1  );
    cout << "High index in mountain array is: " << index << endl;
}