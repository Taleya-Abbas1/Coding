#include<iostream>
using namespace std;
int calculate_factorial(int a)
{
    int ans = 1 ;
   for(int i = a; i>= 1;i--)
   {
     ans = ans* i ;
   }
   return ans ;
   
}

int calculate_nCr(int n , int r  )
{
   
   int a = calculate_factorial(n);
   int b = calculate_factorial(r);
   int c = calculate_factorial(n-r);

   int result = a/(b*c);

   return result ;


}


int main()
{
  int n ;
  cout << "Enter n :";
  cin >> n;
  int r ;
  cout <<"Enter r :";
  cin >> r ;
  int result =calculate_nCr(n,r);
  cout << "Answer is:" << result << endl ;
}