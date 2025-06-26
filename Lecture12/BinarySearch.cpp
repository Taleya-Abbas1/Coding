#include<iostream>
using namespace std;
// for higher range when starrt = 2^31 - 1 and end = 2^31-1 so it goes out of integer range thus we can do chalaki start + (end-start)/2;
int FindIndex(int arr[], int n , int key)
{
    int start = 0 ;
    int end = n - 1 ;
    int mid = (start + end )/2;
    while(start <= end )
    {
      
     
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(key > arr[mid])
        {
            start =  mid + 1;
        }
        else
        {
           end = mid - 1 ;
        }

        mid = (start + end )/2;
    }
    
}

int main()
{
   int even[6] = {2, 4, 6, 8, 10, 12};
    int odd[5] = {3, 5, 7, 9, 11};
    int key ;
    cout << "Enter the key to be searched in array: ";
    cin >> key;
    int index = FindIndex(odd, 5, key);
    if(index != -1)
    {
        cout << "Key found at index: " << index << endl;
    }
    else
    {
        cout << "Key not found in even array." << endl;
    }

}