#include<iostream>
using namespace std;


int main()
{
    int col;
    cin >> col;
     int row;
    cin >> row;
    int** arr = new int*[row];

    for(int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    //creation done 

    //input
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin >> arr[i][j] ;
        }
    }

    //output
     for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    //deallocation
    //delete the columns first  
    for(int i = 0 ; i< row ; i++)
    {
        delete []arr[i];
    }
    delete []arr; //delete the rows

    // deallocation done
    return 0;
    
    

}