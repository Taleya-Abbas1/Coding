#include<iostream>
using namespace std;

bool isPossible(int arr[],int n , int m , int mid)
{
    int studentCount = 1;
    int pageSum = 0;
    for(int i = 0 ; i < n ;i++)
    {
        if(pageSum + arr[i] <= mid )
        {
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount > m || arr[i]> mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true ;
}
int AllocateBook( int n , int m , int arr[])
{
    int s = 0 ;
    int sum = 0 ;
     int answer = -1 ;
    int end = 0;
    for(int i= 0 ; i < n ; i++)
    {  
         sum = sum + arr[i];
     }    
     end = sum ;  
      int  mid = (s + end) / 2;
        while(s<=end)
        {
            if(isPossible(arr, n,m,mid))
            {
                answer = mid ;
                end = mid - 1 ;
            }
            else
            {
                s = mid + 1;
            }
            mid = (s + end) / 2;
        }
    
    return answer;
}
int main()
{
    int n, m;
    cout << "Enter number of books and students: ";
    cin >> n >> m;
    int arr[n];
    cout << "Enter the number of pages in each book: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int result = AllocateBook(n, m, arr);
    if(result != -1)
        cout << "Minimum number of pages allocated to a student is: " << result << endl;
    else
        cout << "Not possible to allocate books to students." << endl;

    return 0;
}