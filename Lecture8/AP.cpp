#include<iostream>
using namespace std;

int ArithmeticProgression(int n )
{
    int AP = 3 * n + 7 ;
    return AP;
}

int main()
{
    int n ;
    cout << "Enter the value of n :";
    cin >> n ;
    int term = ArithmeticProgression(n);
    cout << "The term of the arithmetic progression is: " << term << endl;
}