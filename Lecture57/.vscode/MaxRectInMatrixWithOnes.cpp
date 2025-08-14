#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> nextSmallerElement(vector<int> arr , int n )
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n) ;
    for(int i = n-1; i >=0 ; i--)
    {
        int curr = arr[i];
        while(s.top() != -1 && arr[s.top()] >= curr)
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}
vector<int> prevSmallerElement(vector<int> arr , int n )
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n) ;
    for(int i = 0 ; i < n ; i++)
    {
        int curr = arr[i];
        while(s.top() != -1 && arr[s.top()] >= curr)
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}
int LargestArea(vector<int> arr , int n)
{
   
    int area = -1 ;
      vector<int> next(n);
      next = nextSmallerElement(arr, n);
      vector<int> prev(n);
      prev = prevSmallerElement(arr, n);
      for(int i = 0 ; i< n ; i++)
      {
        int l = arr[i];
           if(next[i] == -1)
           {
               next[i] = n;
           }
           int  b = next[i] - prev[i] - 1;
           int newArea = l * b;
           area = max(area, newArea);
      }
      return area;

}
int MaxArea(vector<vector<int>>& matrix,int m)
{
    if(matrix.empty() || matrix[0].empty())
    {
        return 0;
    }
    // for first row
    int area = LargestArea(matrix[0], m);
    // For remaining rows  , add previous row's values
    for(int i = 1 ; i< m ; i++)
    {
        for(int j = 0 ; j<m ; j++)
        {
            if(matrix[i][j] !=0)
            {
                matrix[i][j] =  matrix[i][j] + matrix[i-1][j];
            }
            else
            {
                matrix[i][j] = 0;
            }
        }
        area = max(area, LargestArea(matrix[i], m));
    }
    return area;

}
int main()
{
  int n ;
    cout << "Enter n -> " ;
    cin>> n ;
     vector<vector<int>> M (n, vector<int>(n));
   
    cout << "Enter the elements :" << endl ;
    cout << "------------------"<< endl;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j< n ;j++)
        {
            cin>> M[i][j] ;

        }
        cout << endl  ;
    }

    int maxArea = MaxArea(M, n);
    cout << "Maximum Area of Rectangle with 1s: " << maxArea << endl;
    return 0;
}
