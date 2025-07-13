#include<iostream>
using namespace std;

void Rotateby90Degree(int arr[][3], int row, int col) {
    // Transpose the matrix
    for (int i = 0; i < row; i++) {
        for (int j = i + 1; j < col; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }

    // Reverse each row
    for (int i = 0; i < row; i++) {
        int start = 0, end = col - 1;
        while (start < end) {
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }
}
int main()
{
    int arr[3][3] ={{1,2,3},{4,5,6},{7,8,9}};
    cout << "Rotated by 90 degree "<< endl ;
    Rotateby90Degree(arr,3,3);
    cout << "Resulting matrix after rotation:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}