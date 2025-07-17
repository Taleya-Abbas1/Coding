#include<iostream>
using namespace std;
// This code has worst complexity O(n^2) and is not efficient for large numbers.
int CheckPrime(int n)
{
    int count = 0 ;
    for(int i = 3 ; i < n ; i++)
    {
       for(int j = 2 ; j< i ; j++)
       {
          if(i%j == 0)
          {
            continue;
          }
          
       }
      
    }
  return count ;
}

int main()
{
 int n ;
 cout <<"Enter number : " ;
 cin >> n;
 int result = CheckPrime(n);
 cout << "Result is:" << result << endl ;
}