#include<iostream>
using namespace std;
int partition(int arr[], int s, int e)
{
   int pivot = arr[s];
   int cnt = 0;
   for(int i = s+1 ; i<=e ; i++)
   {
         if(arr[i] <=pivot)
         {
            cnt++ ;
         }
   }
   int pivotIndex = s+ cnt ;
   swap(arr[pivotIndex], arr[s]);


   //left and right part ki condition pori karna
   int i = s ;
   int j = e ;
   while(i < pivotIndex && j > pivotIndex)
   {
       while(arr[i] <= pivot)
       {
           i++;
       }
       while(arr[j] > pivot)
       {
           j--;
       }

       if(i < pivotIndex && j > pivotIndex)
       {
           
           swap(arr[i++], arr[j--]);
           
       }
    }
       return pivotIndex;


}
void QuickSort(int arr[] , int s  ,int e)
{

   // base case
    if(s >= e)
    {
    return;
    }
    
    int p = partition(arr, s, e);

    // recursive call

    QuickSort(arr, s, p - 1);
    QuickSort(arr, p + 1, e);
}
int main()
{
    int arr[14] = {3,1,4,5,2,7,3,3,8,3,3,5,5,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    QuickSort(arr, 0, n-1);
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    return 0;
}