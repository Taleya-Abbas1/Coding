#include<iostream>
using namespace std ;
int firstOccurence(int arr[],int n , int key)
{
    int start = 0 ;
    int end = n- 1;
    int ans = -1; 
    int mid ;
     mid = (start + end )/2;
  
    while(start <= end)
    {
        
        if(arr[mid] == key)
        {
          ans = mid ;
           end = mid - 1 ; 
        }
        else if(arr[mid] < key)
        {
            start = mid + 1 ;
        }  
        else
        {
            end = mid - 1 ;
        }
       mid = (start + end )/2;
      
    }
    return ans ;
}

int LastOccurence(int arr[], int n ,  int key)
{
    int start = 0 ;
    int end = n- 1;
    int ans = -1;
    int mid ;
     mid = (start + end )/2;
 
    while(start <= end)
    {
        
        if(arr[mid] == key)
        {
            ans = mid ;
           start = mid + 1 ; 
        }
        else if(arr[mid] < key)
        {
            start = mid + 1 ;
        }
        else if(arr[mid] > key)
        {
            end = mid - 1 ;
        }
       mid = (start + end )/2;
      
    }
    return ans ;
}


int main()
{
   int sorted[9] = {0,0,1,2,2,2,9,9,9};
   int key ;
   cout << "Enter  the key :";
   cin >> key ;
   int firstposition = firstOccurence(sorted, 9 ,key);
   int lastposition = LastOccurence(sorted, 9, key);
   cout << "First position :" << firstposition << endl;
   cout << "Last position :" << lastposition << endl;



}