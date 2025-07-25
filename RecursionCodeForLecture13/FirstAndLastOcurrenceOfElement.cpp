#include<iostream>
using namespace std;

int FirstOcuurence(int arr[],int start  ,int end , int key )
{
    
    int mid = start + (end - start) / 2;
    // base case 
    if(start > end)
    {
        return -1;
    }
    if(arr[mid] == key)
    {
       int ans = FirstOcuurence(arr, start, mid - 1, key);
        return (ans != -1) ? ans : mid; // left part mai check kro
         // agar left part mai nahi mila to mid return kro
    }
    else if(arr[mid] < key)
    {
         return FirstOcuurence(arr, mid + 1, end, key);
    }
    else
    {
      return FirstOcuurence(arr, start, mid - 1, key);

    }
     
    
}
int LastOcuurence(int arr[],int start  ,int end , int key )
{
    
    int mid = start + (end - start) / 2;
    // base case 
    if(start > end)
    {
        return -1;
    }
    if(arr[mid] == key)
    {
       int answer =LastOcuurence(arr, mid + 1, end, key);
        return (answer != -1 ) ? answer :  mid ;
          // right part mai check kro 
       
         start = mid + 1;
    }
    else if(arr[mid] < key)
    {
       return LastOcuurence(arr, mid + 1, end, key);
    }
    else
    {
         return LastOcuurence(arr, start, mid - 1, key);

    }
   
}


int main()
{
    int arr[5] = {1, 2, 3, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 3;
    int first = FirstOcuurence(arr, 0, n - 1, key);
    cout << "First occurrence of " << key << " is at index " << first << endl;
    int last = LastOcuurence(arr, 0, n - 1, key);
    cout << "Last occurrence of " << key << " is at index " << last << endl;
    return 0;
}
