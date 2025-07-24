#include<iostream>
using namespace std;
int power(int n )
{
    if(n == 0 )
    {
        return 1 ;
    }
    int smallerproblem = power(n-1);
    int j = 0 ;
    int biggerproblem = 2 * smallerproblem;
    return biggerproblem ;
}

int main()
{
    int n ;
    cout << "Enter number :";
    cin >> n ;
    int ans = power(n );
    cout << "Power of 2 raised to " << n << " is " << ans << endl;
}