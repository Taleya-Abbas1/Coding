#include<iostream>
using namespace std ;
// for optimisation we can take bool variable to check if any swap is made in the inner loop
// if no swap is made then we can break the loop early
void BubbleSort(int arr[],int n)
{
    bool swapped = false ;
    for(int i = 0 ; i< n- 1; i++)
    {
        for(int j = 0 ; j< n - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swapped = true; // a swap was made
            }
        }
        if(!swapped) 
        {
            break;
        }
    }
}
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr, n);
    cout << "Sorted array : \n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}