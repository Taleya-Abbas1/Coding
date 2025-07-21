#include<iostream>
using namespace std;
int main()
{
    //check the number is prime or not 
     int n ;
     cout << "Enter the number :";
     cin >> n ;
     
    
    int i = 2;
   
    while(i <n)
    {
        if(n % i == 0)
        { 
            cout << " not a prime number." << endl;
            break ;
            return 0 ;
        }
        
        else if(i == n - 1)
        {
            cout << n << " is a prime number." << endl;
            break ;
        }
        else if(n < 2)
        {
            cout << n << " Prime number begins with 2." << endl;
            break ;
        }
        i++;

    }
    if(n == 2)
        {
            cout << "is a prime number." << endl;
        
        }

}