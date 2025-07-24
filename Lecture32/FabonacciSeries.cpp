#include<iostream>
using namespace std; 
int FabFunc(int n )
{
    // base case
    if( n == 0)
    {
        return 0 ;
    }
    if( n == 1)
    {
        return 1 ;
    }


     int ans = FabFunc(n - 1)+ FabFunc(n - 2);

     return ans;
}

int main()
{
   int n ;
   cin >> n ;
  int ans = FabFunc(n);
   cout << ans << endl;
   return 0;
}

//Test case
// Input: 5
// F(4) = 3
// F(3) = 2
// ans = F(4) + F(3) = 3 + 2 = 5
// output: 5