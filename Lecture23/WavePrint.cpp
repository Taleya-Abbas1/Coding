#include<iostream>
using namespace std;
void PrintWave(int arr[][4],int row , int col)
{
    if(col & 1)
    {
        for(int i = row - 1 ; i >=0 ; i--)
        {
            cout << arr[i][col] << " ";
        }
    }
    else
    {
        for(int i = 0 ; i < row ; i++)
        {
            cout << arr[i][col] << " ";
        }
    }
    
}
int main()
{
    int arr[3][4] = {{3,4,5,6},{1,2,3,4},{2,3,4,5}};   
    int row = 3, col = 4;
    cout << "Printing the array in wave form:" << endl;
    
    for(int i = 0 ; i < col ; i++)
    {
        
        PrintWave(arr, row, i);
    }
}
