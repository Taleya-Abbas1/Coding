#include<iostream>
using namespace std;
bool isSorted(int arr[],int n)
{
    // base case
    if(n == 0 || n == 1 )
    {
       return 1 ;
    }

    // recursive call 
    if(arr[0] > arr[1])
    {
        return 0 ;
    }
    else
    {
        isSorted(arr+1 , n -1 );
    }
}
int main()
{ 
    int arr[6] = {1,2,3,4,5,6};
    int n = 6 ;
    bool result = isSorted(arr, n);
    cout << "Is Sorted :" << result << endl ;

}