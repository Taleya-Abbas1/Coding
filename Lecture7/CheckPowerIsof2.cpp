#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout << "Enter the integer :";
    cin >> n ;
    int power = 1;
    for(int i = 0 ; i < 30 ; i++)
    {
        if(power == n)
        {
            cout << "The number is a power of 2." << endl;
            
        }
        power *= 2;
    }
    cout << "The number is not a power of 2." << endl;
}