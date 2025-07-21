#include<iostream>
using namespace std;
int main()
{
    int row ,column;
    cout << "Enter the number of rows youu want in pattern :";
    cin>>row;
    cout <<"Enter the number of columns you want in pattern :";
    cin >> column ;
    for(int i = 1 ; i <= row; i++)
    {
        for(int j = 1 ; j <= column  ; j++)
    {
        cout << i;
    }
    cout << endl ;
    // int row ,column;
    // cout << "Enter the number of rows youu want in pattern :";
    // cin>>row;
    // cout <<"Enter the number of columns you want in pattern :";
    // cin >> column ;
    // for(int i = 1 ; i <= row; i++)
    // {
    //     for(int j = 1 ; j <= column  ; j++)
    // {
    //     cout << "*";
    // }
    // cout << endl ;
}


}