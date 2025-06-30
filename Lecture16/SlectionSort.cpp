#include<iostream>
using namespace std;
void selectionsort(int arr[],int  n)
{
    for(int i =0 ; i < n - 1 ; i++)
    {
        int min = arr[i];
        for(int j= i+1 ; j < n ; j++)
        {
            if(min > arr[j])
            {
                min = arr[j];
            }
            if( min != arr[i])
            {
                int temp = arr[i];
                arr[j] = temp;
                arr[i] = min;
            }
        }
    }
}
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr, n);
    cout << "Sorted array: \n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}