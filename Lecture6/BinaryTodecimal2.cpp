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
     int bit ;
     bit = n &1  ;
     if(bit ==1 )
     {
       answer += power; 
     }
     
     power *= 2;
      n = n /10 ;
   }
    cout << "The binary representation is: " << answer << endl;
}   