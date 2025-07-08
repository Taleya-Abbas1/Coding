#include<iostream>
using namespace std;
void MoveZeros(int arr[],int n)
{
    int k = 0 ;
    int count = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] != 0)
        {
            arr[k] = arr[i];
            k++;
        }
        else
        {
            count++;
        }
    }
    while(count > 0)
    {
        arr[k] = 0;
        k++;
        count--;
    }

}
int main()
{
    int arr[] = {2,0,1,3,0,0,0};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
    MoveZeros(arr, n);
    
    cout << "\nArray after moving zeros: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
    return 0;
}