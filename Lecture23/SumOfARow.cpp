#include<iostream>
using namespace std ;
void FindSumofRows(int arr[3][4])
{
    for(int i = 0; i < 3; i++)
    {
        int sum = 0;
        for(int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
        cout << "Sum of row " << i << " is: " << sum << endl;
    }
}


int main()
{
    int arr[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
    cout << "Calculating sum of each row in the array:" << endl;
    FindSumofRows(arr);
    
}