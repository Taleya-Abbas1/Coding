#include<iostream>
using namespace std ;
bool BinarySearch(int matrix[][4],int col, int row,int target )
{
     int start = 0;
     int end = row*col - 1;
     int mid = start + (end - start) / 2;
     while(start<=end)
     {
        int element = matrix[mid/col][mid%col];

        if(element == target)
        {
            return 1;
        }
        if(element<target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
     }
     return 0;

}
int main()
{
    int matrix[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int target ;
    cout << "Enter the element to search: ";
    cin >> target;
    if (BinarySearch(matrix, 4, 4, target)) {
        cout << "Element found in the matrix." << endl;
    } else {
        cout << "Element not found in the matrix." << endl;
    }
    return 0;
}