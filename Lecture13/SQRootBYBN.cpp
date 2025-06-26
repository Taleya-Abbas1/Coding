#include<iostream>
using namespace std ;
 int BinarySearch(int n)
 {
        int s = 0 ;
      int e = n;
      int ans = -1;
      int  mid = s + (e-s)/2;
      while(s<e)
      {
        if(mid*mid > n)
        {
            e = mid -1 ;

        }
        else if(mid*mid < n)
        {
            ans = mid ;
            s = mid + 1;
        }
        else if(mid*mid == n)
        {
            return mid ;
        }
          mid = s + (e-s)/2;
      }
      return ans ;
 }
 double sqrtRootPrecise(int n , int precision , int tempSol)
{
    double ans = tempSol ;
      double factor = 1;
      for(int i = 0 ; i < precision ; i++)
      {
        factor = factor / 10;
        for(double j = tempSol ; j * j < n ; j = j + factor)
        {
            ans = j;
        }
      }
      return ans;
}

int main()
{
    int n ;
    cout<<"Enter the number to find the square root : ";
    cin>>n;
    int tempSol = BinarySearch(n);
    cout << "The square root of " << n << " is approximately: " <<  sqrtRootPrecise(n, 3, tempSol)<< endl;   
}
