#include<iostream>
using namespace std;
int main()
{
    // jagged array is an array having different bumber of columns in each row
    int row ;
  
    cout << "Enter the number of rows :";
    cin >> row;

    // create the jagged array

    int** jaggedArray = new int*[row];
    int* col = new int[row]; // 1D array to store the number of columns for each row
    //Allocating diiferent number of columns for each row
    for(int i = 0 ; i < row ; i++)
    {
        
        cout << "Enter the columns for row " << i+ 1 << " :" << endl ;
        cin >> col[i];
        jaggedArray[i] = new int[col[i]];
         cout << "Enter the elements for row " << i + 1 << " :" << endl;
        for(int j = 0 ; j < col[i] ; j++)
        {
            cin >> jaggedArray[i][j];
        }
    }

   

    //output the jagged array
    cout << "The jagged array is :" << endl;
    for(int i = 0 ; i < row ; i++)
    {

        for(int j = 0 ; j < col[i] ; j++)
        {
            cout << jaggedArray[i][j] << " ";
        }
        cout << endl;
    }

    //free the memory
    for(int i = 0 ; i < row ; i++)
    {
        delete []jaggedArray[i]; // delete each row
    }
    delete []jaggedArray; // delete the array of pointers

    // benefits of jagged array
    // 1. Memory efficient: It allows you to allocate memory only for the required number of elements in each row.
    // 2. Flexibility: You can have different sizes for each row, which is
    //    useful when dealing with row that has varying columns and then save memory.
}