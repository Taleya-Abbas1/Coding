#include<iostream>
using namespace std;
int main()
{
    int row, column;
    cout << "Enter the number of rows you want in pattern: ";
    cin >> row;
    cout << "Enter the number of columns you want in pattern: ";
    cin >> column;
    // char count = 1;
    for (int i = 1; i <=row ;i++)
    {
    
        for (int j = 1; j <= i ; j++)
        {
            char ch= 65 + i+j-2;
            cout << ch<< " ";
           // count++;
           
        }
        cout << endl;
    }
    return 0;
    
}