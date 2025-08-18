#include<iostream>
#include<queue>
using namespace std ;
int SumOfMinMax(int arr[], int n , int k)
{
     deque<int> mini(k) ;
     deque<int> maxi(k);

     // addition for first k size window 
     for(int i = 0 ; i<k ; i++)
     {
        while(!mini.empty() && arr[mini.back()] >= arr[i])
        {
            mini.pop_back();
        }
        while(!maxi.empty() && arr[maxi.back()] <= arr[i])
        {
            maxi.pop_back();
        }
        maxi.push_back(i);
        mini.push_back(i);
     }
     int ans = 0 ;

     // for remaining windows
     for(int i = k ; i< n ; i++)
     {
        ans += arr[mini.front()] + arr[maxi.front()];
        // removal 
        while(!mini.empty() && i - mini.front()  >= k)
        {
            mini.pop_front();
        }
        while(!maxi.empty() && i - maxi.front()  >= k)
        {
            maxi.pop_front();
        }
       // addition
        while(!mini.empty() && arr[mini.back()] >= arr[i])
        {
            mini.pop_back();
        }
        while(!maxi.empty() && arr[maxi.back()] <= arr[i])
        {
            maxi.pop_back();
        }
        maxi.push_back(i);
        mini.push_back(i);

     }

     // make sure to consider the last window 
     ans += arr[mini.front()] + arr[maxi.front()]   ;

     return ans ;
}
int main()
{
    int arr[7] = {2,5,-1,7,-3,-1,-2};
    int n = 7;
    int k = 4 ;
    cout << SumOfMinMax(arr, 7, k);
   
}