#include<iostream>
using namespace std ;
int main()
{

//    int n  ;
//    cin >> n ;
int n = 2147483645;
   int mode ;

   int count = 0 ;
   while(n > 0 )
   {
     cout << "number"<<n << endl ;
     cout <<"remainder"  <<n % 2 << endl;
     if(n%2 == 1)
     {
        count ++ ;
     }
     n = n/2 ;
     
     
   }

  cout << count <<endl ;
}