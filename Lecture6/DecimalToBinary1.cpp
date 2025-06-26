#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout << "Enter the number :";
   cin >> n ;
   int i = 0 ;
   int answer = 0 ;
   int j  ;
   int power = 1 ;
   int remainder;
   while (n>0)
   {
      remainder = n%2 ;
      j = 1 ;
      while(j<=i)
      {
        power *= 10 ;
        j++;
        
      }
     answer = remainder * power+ answer ;
     n = n/2 ; 
     i++;
     power = 1 ;

   }
    cout << "The binary representation is: " << answer << endl;
}