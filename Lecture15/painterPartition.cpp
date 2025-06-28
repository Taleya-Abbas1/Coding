#include<iostream>
using namespace std;


int isPossible(int arr[], int n, int k, int mid)
{
    int painterCount = 1;
    int paintSum = 0;
    for(int i = 0; i < n; i++)
    {
        if(paintSum + arr[i] <= mid)
        {
            paintSum += arr[i];
        }
        else
        {
            painterCount++;
            if(painterCount > k || arr[i] > mid)
            {
                return false;
            }
            paintSum = arr[i];
        }
    }
    return true;
}
int PaintPartition(int arr[],int n , int k)
{
    int s = 0;
    int sum = 0 ; 
    int end = 0;
    int answer = - 1 ;
    for(int i = 0 ; i < n ; i++)
    {  
        sum += arr[i];
    }    
    end = sum;
    int mid = s +(end-s)/2;
    while(s <= end)
    {
        if(isPossible(arr, n, k, mid))
        {
            answer = mid;
            end = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (end - s) / 2;
    }
    return answer;
}

int main()
{
    int n, k;
    cout << "Enter paint array size and painter's number: ";
    cin >> n >> k;
    int arr[n];
    cout << "Enter the array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int result = PaintPartition(arr,n ,k);
    if(result != -1)
        cout << "Minimum number of paint unit partitioned : " << result << endl;
    else
        cout << "Not possible to partition the paint unit." << endl;

    return 0;
}