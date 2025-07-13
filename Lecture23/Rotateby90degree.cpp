#include<iostream>
using namespace std;
void Rotateby90Degree(int arr[][3],int row , int col)
{
    int startrow = 0 ;
    int endingRow = row - 1 ;
    int startCol = 0 ;
    int endingCol = col - 1 ;
    int total = row * col;
    int count = 0;
    while(count < total && startCol<=endingCol)
    {
        for(int i = endingRow ; i >= startrow && count < total  ;i--)
        {
            cout << arr[i][startCol]<< " ";
            count++;
        }
        cout << endl;
        startCol++;
    }
}
int main()
{
    int arr[3][3] ={{1,2,3},{4,5,6},{7,8,9}};
    cout << "Rotated by 90 degree "<< endl ;
    Rotateby90Degree(arr,3,3);
}