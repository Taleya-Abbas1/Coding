#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout << "Enter the number: ";
    cin >> n;
   bool isPrime = true;
    for(int i = 2 ; i < n ; i++)
    {
       
        if(n%i == 0 )
        {
            isPrime = false ;
            break ;
        }
        if(n < 2)
        {
            cout << "Prime number begin with 2 " << endl;
        }
       
    }
    if(isPrime)
    {
        cout << n << " is a prime number." << endl;

    }
    else
    {
        cout << n << " is not a prime number." << endl;
    }
}