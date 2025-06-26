#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout << "Enter the number :";
   cin >> n ;
   int i = 0 ;
   int answer = 0 ;

   int power = 1 ;
   int remainder;
  
   while (n>0)
   {
      remainder= n % 10 ;
      answer = power * remainder+ answer ;
      power *= 2;
      n = n /10;
      
   }
    cout << "The binary representation is: " << answer << endl;
}