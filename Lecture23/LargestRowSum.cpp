#include<iostream>
using namespace std;
int FindSumofRows(int arr[3][4])
{
      int max = 0 ;
    for(int i = 0; i < 3; i++)
    {
        int sum = 0;
        for(int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
        cout <<  sum << endl;
      
        if(sum > max)
        {
            max = sum;
        }

    }
    return max;
}
int FindLargestRowSumIndex(int arr[3][4])
{
    int max = 0 ;
    int rowIndex = 0;
    for(int i = 0; i < 3; i++)
    {
        int sum = 0;
        for(int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
        cout <<  sum << endl;
        
        if(sum > max)
        {
            rowIndex = i;
            max = sum;
        }
       
    }
   
    return rowIndex;
}



int main()
{
    int arr[3][4] = {{3,4,5,6},{1,2,3,4},{2,3,4,5}};
    cout << "Calculating sum of each row in the array:" << endl;
     int LargestValue = FindSumofRows(arr);
    cout << "Largest row sum is: " << LargestValue << endl;
    int largestRowIndex = FindLargestRowSumIndex(arr);
    cout << "Index of the row with largest sum is: " << largestRowIndex << endl;
    
}
