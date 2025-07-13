#include<iostream>
using namespace std ;
bool BinarySearch(int matrix[][5],int col, int row,int target )
{
     int rowIndex = 0 ;
     int colIndex = col - 1;
     
     while(rowIndex<row && colIndex>=0)
     {
        int element = matrix[rowIndex][colIndex];

        if(element == target)
        {
            return 1;
        }
        if(element<target)
        {
           rowIndex++;
        }
        else
        {
          colIndex--;
        }
        
     }
     return 0;

}
int main()
{
    int matrix[5][5] = {{1,4,7,11,15},
                        {2,5,8,12,19},
                          {3,6,9,16,22},
                        {10,13,14,17,24},
                        { 18,21,23,26,30} };
            int target ;
    cout << "Enter the element to search: ";
    cin >> target;
    if (BinarySearch(matrix, 5, 5, target)) {
        cout << "Element found in the matrix." << endl;
    } else {
        cout << "Element not found in the matrix." << endl;
    }
    return 0;             
}