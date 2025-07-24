#include<iostream>
using namespace std;
int DistinctWays(int n)
{
    // base cases
    if(n == 0 )
    {
        return 1 ;
    }
    if( n< 0)
    {
        return 0 ;
    }
    return DistinctWays(n-1) + DistinctWays(n-2);
}
int main()
{
    int n ;
    cin >> n ;
    int ans = DistinctWays(n);
    cout << ans << endl;
    return 0;
}   
// you can climb 1 or 2 stairs at a time
// Test case    
// Input: 3
// out put : 3
// 1+1+1