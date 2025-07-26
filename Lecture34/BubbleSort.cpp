#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
   // base case  ----> matlab already sorted hai .
   if( n == 1 || n == 0)
   {
       return;
   }

   // ak case solve kr liya .
   for(int i = 0 ; i< n -1 ; i++)
   {
     if(arr[i]> arr[i+1])
     {
        swap(arr[i], arr[i+1]);
     }
   }
   // recursion call .
   bubbleSort(arr,n-1);
}
int main()
{
      int arr[6] = { 10,1,7,6 ,14,9};
      int n = sizeof(arr)/sizeof(arr[0]);
      bubbleSort(arr,n);
      cout << "Sorted array: \n";
      for(int i = 0; i < n; i++)
      {
          cout << arr[i] << " ";
      }
      cout << endl;
      return 0;
}