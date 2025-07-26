#include<iostream>
using namespace std;
void Merge(int *arr , int s , int e)
{
      int mid = (s+e)/2  ;
      int len1 =  mid - s + 1 ;
      int len2 = e - mid ;

      // Intialize two arrays ..

      int* first =new int[len1];
      int* second = new int[len2];

      // putting values in arrays 
     int k = s ;
      for(int i = 0 ; i < len1 ; i++)
      {
        first[i] = arr[k++];
      }
      k = mid+ 1;
      for(int i = 0 ; i < len2 ; i++)
      {
        second[i] = arr[k++];
      }

      // Merge them
      k = s;
      int i = 0 ;
      int j = 0 ;
      while(i< len1 && j< len2)
      {
        if(first[i] < second[j])
        {
            arr[k++] =  first[i++];
        }
        else
        {
            arr[k++] = second[j++];
        }
      }
      while(i< len1)
      {
        arr[k++] = first[i++];
      }
       while(j< len2)
      {
        arr[k++] = second[j++];
      }
//     cout << "Merging from " << s << " to " << e << ": ";
//   for (int i = s; i <= e; i++) {
//     cout << arr[i] << " ";
// }
// cout << endl;
      
}


void MergeSort(int *arr , int s , int e)
{
    // base case
    if(s>=e)
    {
      return ;
    }

    int mid = (s+e)/2 ;
           
    // right part sorting ...
    MergeSort(arr,s,mid);
   // cout << "Sorting left part from " << s << " to " << mid << endl;
    //Left part sorting ...
    MergeSort(arr,mid+1,e);
   // cout << "Sorting right part from " << mid + 1 << " to " << e << endl;

    Merge(arr,s,e);
}


int main()
{
   int arr[7] = {38,27,43,3,9,82,10};
   int n = 7;
   MergeSort(arr, 0, n - 1);
   for (int i = 0; i < n; i++) {
       cout << arr[i] << " ";
   }
   cout << endl;
   return 0;
}

// Step-by-step Flow:
// First Recursive Call (left half):
// MergeSort(arr, 0, 3);

// Divides [38, 27, 43, 3] into [38, 27] and [43, 3]

// Then [38, 27] → [38], [27] → merge to [27, 38]

// Then [43, 3] → [43], [3] → merge to [3, 43]

// Then merge [27, 38] and [3, 43] → [3, 27, 38, 43]

// Second Recursive Call (right half):
// MergeSort(arr, 4, 6);

// Divides [9, 82, 10] into [9] and [82, 10]

// [82, 10] → [82], [10] → merge to [10, 82]

// Then merge [9] and [10, 82] → [9, 10, 82]

// Final Merge:

// Merge [3, 27, 38, 43] and [9, 10, 82]

// Final sorted array: [3, 9, 10, 27, 38, 43, 82]



