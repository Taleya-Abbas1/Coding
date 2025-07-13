#include<iostream>
using namespace std ;
void findElement(int arr[3][4], int target)
{
   for(int i = 0; i< 3;i++)
   {
      for(int j = 0 ; j<4 ;j++)
      {
         if(arr[i][j] == target)
         {
           cout << "the index is "<< i<<" , "<< j << endl;
           return ;
         }
            
      }
   }
    
}

int main()
{
    int arr[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
    int target ;
    cout << "Enter the target element :"<< endl ;
    cin >> target ;
    // bool found =
     findElement(arr, target);
    // if(found)
    // {
    //     cout << "Element found in the array." << endl;
    // }
    // else
    // {
    //     cout << "Element not found in the array." << endl;
    // }
}