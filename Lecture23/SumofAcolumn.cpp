#include<iostream>
using namespace std ;
void FindSumofRows(int arr[3][4])
{
    for(int i = 0; i < 4; i++)
    {
        int sum = 0;
        for(int j = 0; j < 3; j++)
        {
            sum += arr[j][i];
        }
        cout << "Sum of column " << i << " is: " << sum << endl;
    }
}


int main()
{
    int arr[3][4] = {{1,2,3,4},{2,3,4,5},{3,4,5,6}};
    cout << "Calculating sum of each row in the array:" << endl;
    FindSumofRows(arr);
    
}