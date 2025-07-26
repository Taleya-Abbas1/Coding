#include<iostream>
using namespace std; 
int FindMin(int arr[] , int  n)
{
   
    int minIndex = 0;
   for(int i = 1 ; i < n ; i++)
   {
       if(arr[i] < arr[minIndex] )
       {
          minIndex = i ;
       }
   }
   return minIndex ;
}
void selectionSort(int arr[], int n)
{
    // base cases
    if(n == 0 )
    {
        return ;
    }
    
    int minIndex = FindMin(arr , n) ;

    swap(arr[0],arr[minIndex]);
   // recursive call ..
     selectionSort(arr+ 1,n -1);

        
}
int main()
{
    int arr[5] ={64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]); 
    
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}