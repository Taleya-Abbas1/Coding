#include<iostream>
using namespace std;
int PowerCalculate(int a , int  b )
{
    // base cases
    if(b == 0)
    {
        return 1 ;
    }
    if(b== 1)
    {
        return a ;
    }
    //recursive case
    int ans = PowerCalculate(a, b / 2);
    return (b % 2 == 0) ?   ans * ans : a * ans * ans;
    
}
int main()
{
    int b , e ;
    cout << "Enter base and exponent: ";
    cin >> b >> e;
    int result = PowerCalculate(b, e);
    cout << "Result: " << result << endl;
}