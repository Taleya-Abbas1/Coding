#include<iostream>
using namespace std;
int main()
{
    int row, column;
    cout << "Enter the number of rows you want in pattern: ";
    cin >> row;
    cout << "Enter the number of columns you want in pattern: ";
    cin >> column;
    
    for (int i = 1; i <=row ;i++)
    {
       int count = i ;
        for (int j = 1; j <= i; j++)
        {
            cout <<count<< " ";
            count++;
           
        }
        
        cout << endl;
    }
    return 0;
    
}
// another method to solve this is 
//for (int j = 0; j <= i-1; j++)
        // {
        //     cout <<i+j << " ";
        //}
//3rd method to solve the question is
// for (int j = 1; j <= i; j++)
//         {
//             cout << i+j-1<< " ";
//         }