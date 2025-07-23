#include<iostream>
using namespace std;

 // agar  mai start ko koi value na doun tu wo default argument esy ban jaye ga ....
void print(int arr[],int n , int start = 0)
{
    for(int i = start ; i< n ; i++)
    {
        cout << i[arr] << endl ;
    }
}
int main()
{
    int arr[5] = {5,6,7,8,9};
    int size = 5 ;
   
    print(arr,size);
}