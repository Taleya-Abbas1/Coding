#include<iostream>
using namespace std ;
void SpiralPrint(int arr[][3], int row , int col)
{
    int startrow = 0 ;
    int endingRow = row - 1 ;
    int startCol = 0 ;
    int endingCol = col - 1 ;
    int total = row*col;
    int count= 0;
    while(count < total)

    {
        // Print the first row
        for(int i = startCol ; i<=endingCol && count < total;i++ )
        {
            cout << arr[startrow][i] << " ";
            count++;
        }
        startrow++;
        //print the last column 
        for(int i = startrow ; i<= endingRow && count < total; i++)
        {
            cout << arr[i][endingCol] << " ";
            count++;
        }
        endingCol--;
        //print the last row
        for(int i = endingCol ; i>= startCol && count < total ; i--)
        {
            cout << arr[endingRow][i] <<" ";
            count++;
        }
        endingRow --;
        //print the start col 
        for(int i = endingRow;  i>= startrow && count < total; i--)
        {
            cout << arr[i][startCol]<< " ";
            count++;
        }
        startCol++;
    }
}
int main()
{
    int arrr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int row = 3, col = 3;
    cout << "Printing the array in spiral form:" << endl;
    SpiralPrint(arrr, row, col);
    cout << endl;
}