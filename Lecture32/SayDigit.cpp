#include<iostream>
using namespace std;
void SayDigit(int n , string arr[])
{
    //base case
    if(n ==0)
    {
        return ;
    }
    //recurvsive case
    int digit = n % 10; // get the last digit
    n = n / 10; // remove the last digit
    SayDigit(n, arr);

    // processing
    cout << arr[digit] << " ";
}

int main()
{
    string arr[10] = {"zero", "one", "two", "three", "four", 
                            "five", "six", "seven", "eight", "nine"};
    int n;
    cin >> n;
    SayDigit(n, arr);
    cout << endl;
                        
 }