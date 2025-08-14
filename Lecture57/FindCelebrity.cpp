#include<iostream>
#include<vector>
#include<stack>
using namespace std;
bool knows(vector<vector<int>>& M, int a, int b)
{
    if(M[a][b] == 1)
    {
        return true ;
    }
    else
    {
        return false ;
    }
}
int_least64_t FindCelebrity(vector<vector<int>>& M , int n )
{ 
  //step 1 : push All elements in stack 
  stack<int> s ;
  for(int i = 0 ; i< n ; i++)
  {
    s.push(i);
  }
  //step 2 : Take two Element from stack and check who knows who 
 while(s.size()>1)
 {
    int a = s.top();
    s.pop();
    int b = s.top();
    s.pop();
    if(knows(M,a,b))
    {
        s.push(b);
    }
    else
    {
        s.push(a);
    }

 }
 // step 3 : single element left in stack as "potential candidate " .. verify it 
  int candidate = s.top();
   // check zeroCount equal to rowCount 
  int zeroCount = 0  ;
  for(int i = 0 ; i<  n ; i++)
  {
     if(M[i][candidate] == 0)
     {
        zeroCount++ ;
     }
  }
  if(zeroCount != n -1)
  {
      return -1;
  }
   // check OneCount equal to ColCount 
  int OneCount = 0  ;
  for(int j = 0 ; j<  n ; j++)
  {
     if(M[candidate][j] == 1)
     {
        OneCount++ ;
     }
  }
  if(OneCount != n - 1)
  {
      return -1;
  }
    return candidate ;
 

}
int main()
{
  
    int n ;
    cout << "Enter n -> " ;
    cin>> n ;
     vector<vector<int>> M (n, vector<int>(n));
    cout << endl ;
    cout << "Enter the elements :" << endl ;
    cout << "------------------";
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j< n ;j++)
        {
            cin>> M[i][j] ;

        }
        cout << endl  ;
    }
    bool ans = FindCelebrity(M ,n);
    if(ans == -1)
    {
        cout << "No Celebrity found" << endl ;
        return 0 ;
    }
    else{
        cout << "Celebrity is " << ans << endl ;
    }

}