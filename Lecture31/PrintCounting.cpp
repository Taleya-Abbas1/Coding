#include<iostream>
using namespace std;
void counting(int n)
{
    if(n == 0 )
  { 
     return  ;
  }
  // reverse order
   //cout << n << " " ;
   counting(n-1);
  cout << n << " " ;

}
int main()
{
    int n ;
    cin >> n ;
     counting(n );
}