#include<iostream>
using namespace std ;
int main()
{
    // subtraction of sum and product of digits of a number .
    int num ;
    cout << "Enter the number whose digits to be product :";
    cin >> num ;
    int n = num ;
 int product = 1;
    int sum = 0;
    while(num != 0)
    {
        
        int mode ;
        mode = num % 10 ;
        sum += mode ;
        product *= mode ;
        num = num/10 ;
    }
   cout << product-sum  << endl ; 

}