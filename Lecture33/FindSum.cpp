#include<iostream>
using namespace std ;
int FindSum(int arr[],int size)
{
    
    //  base Case
     if( size == 0)
     {
        return 0 ;
     }
     // recursive call
        int sum = 0 ;
      sum = arr[0] + FindSum(arr+1 , size - 1);
      return sum;
}



int main()
{
    int arr[5] ={3,2,5,1,6};
    int sum = FindSum(arr,5);
    cout << " Sum is :" << sum << endl ;
}