#include<iostream>
#include<queue>
#include<vector>
using namespace std ;
vector<int> firstNegativeElemnt(int arr[],int n , int k)
{
    deque<int> dq;
    vector<int> result;

    // for first k size window
    for(int i = 0 ; i < k ; i++)
    {
        if(arr[i] < 0  )
        {
            dq.push_back(i);
        }
    }
     if(dq.size()>0)
     {
        result.push_back(arr[dq.front()]);
     }
     else
     {
        result.push_back(0);
     }


    // Process for remaining elements 
    for(int i = k ; i< n ; i++)
    {
        if(!dq.empty() && i - dq.front() >= k)
        {
            dq.pop_front();
        }
        if(arr[i]<0)
        {
            dq.push_back(i);
        }
        if(dq.size()>0)
        {
        result.push_back(arr[dq.front()]);
        }
       else
       {
        result.push_back(0);
       }

    }

   return result ;
}

int main()
{
    int arr[] = {-8,2,3,-6,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;

    vector<int> result = firstNegativeElemnt(arr, n, k);

    cout << "First negative elements in each window of size " << k << ": ";
    for(int i : result)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}