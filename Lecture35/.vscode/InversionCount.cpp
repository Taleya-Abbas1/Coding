#include<iostream>
using namespace std ;
int InversionCount(int *arr,int n)
{
    int count = 0 ;

    for(int i = 0 ; i < n -1 ; i++)
    {
        for(int j = i=1 ; j < n ;j++ )
        {
            if(arr[i]>arr[j])
            {
             count++ ;
            }
        }
    }
    return count ;
}
int main()
{
    int arr[4] ={4,3,2,1};
    int n = 4 ;
  int count = InversionCount(arr , n);
  cout << "Inversion count is :" << count << endl ;
}