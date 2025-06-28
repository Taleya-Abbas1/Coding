#include<iostream>
using namespace std;
int sort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
bool isPossible(int arr[], int n, int c, int mid)
{
    int cowCount = 1;
    int lastCowPosition = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] - lastCowPosition >= mid)
        {
            cowCount++;
            lastCowPosition = arr[i];
        }
        if(cowCount == c)
        {
            return true;
        }
    }
    return false;
}



int cowsPosition(int arr[],int n , int c )
{
    // Sort the array first
     sort(arr, n);
    int s = 0 ; 
    int max = arr[0];
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    int end  = max;
    int answer = -1;
    int mid = s + (end - s) / 2;
    while(s <= end)
    {
        if(isPossible(arr, n, c, mid))
        {
            answer = mid;
            s = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = s + (end - s) / 2;
    }
    return answer;
}
int main()
{
    int n, c;
    cout << "Enter number of stalls and cows: ";
    cin >> n >> c;
    int arr[n];
    cout << "Enter the positions of the stalls: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int result = cowsPosition(arr, n, c);
    cout << "The largest minimum distance is: " << result << endl;
    
    return 0;
}