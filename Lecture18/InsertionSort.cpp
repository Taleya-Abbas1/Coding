#include<iostream>
using namespace std;
void InsertionSort(int arr[],int n)
{
    for(int i = 1 ; i < n ; i++)
    { 
        int j = i - 1;
        int temp = arr[i];
        while(j >=0)
        {
            if(arr[j]>temp)
            {
                arr[j+1] = arr[j];

            }
            else
            {
                break;
            }
            j--;
        }
        arr[j+1] = temp;
    }
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    InsertionSort(arr, n);
    cout << "Sorted array: \n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}