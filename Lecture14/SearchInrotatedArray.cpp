#include<iostream>
using namespace std;
int FindPovit(int arr[],int n)
{
    int s = 0 ;
    int e = n - 1 ;
    int mid = s +(e-s)/2;
    while(s<e)
    {
        if(arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid ;
        }
        mid  = s +(e-s)/2;
    }
    return s ;
}
int binarySearch(int arr[],int s,int e,int key)
{
    while(s <= e)
    {
        int mid = s + (e - s) / 2;
        if(arr[mid] == key)
        {
            return mid + 1;
        }
        else if(arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return 0;
}


int main()
{
    int arr[5] = {7,9,1,2,3};
    int key ;
    cout << "Enter the key :";
    cin >> key ;
    int pivot  = FindPovit(arr,5);
    cout << "Povit is " << pivot << endl ;
   if(key >= arr[pivot] && key <= arr[4])
    {
        int ans = binarySearch(arr,pivot,4,key);
       
            cout << "Element found at index: " << ans - 1 << endl;
        
    }
    else
    {
        int ans = binarySearch(arr,0,pivot - 1,key);
        if(ans == 0)
        {
            cout << "Element not found" << endl;
        }
        else
        {
            cout << "Element found at index: " << ans - 1 << endl;
        }
    }
    return 0;

    

}