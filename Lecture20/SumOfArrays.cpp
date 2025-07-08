#include<iostream>

using namespace std;

void AddArrays(int arr1[], int arr2[], int n, int m, int ans[],int resultSize)
{
    int carry = 0;
    int sum;
    int i = n - 1;
    int j = m - 1;
    int k = resultSize - 1; 
    
    // Add corresponding digits from both arrays
    while(i >= 0 && j >= 0)
    {
        sum = arr1[i] + arr2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans[k] = sum;
        i--;
        j--;
        k--;
    }
    
    // Add remaining digits from arr1
    while(i >= 0)
    {
        sum = arr1[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans[k] = sum;
        i--;
        k--;
    }
    
    // Add remaining digits from arr2
    while(j >= 0)
    {
        sum = arr2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans[k] = sum;
        j--;
        k--;
    }
    
    // Handle final carry
    if(carry != 0)
    {
        ans[k] = carry;
    }
}

int main()
{
    int arr1[] = {9, 9, 9,2};
    int arr2[] = {9,9,9};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    int resultSize = max(n, m) + 1; 
    int result[resultSize] ;
    AddArrays(arr1, arr2, n, m, result, resultSize);
    
    cout << "Sum of arrays is: ";
    
    for (int i = 0; i < resultSize; i++) {
        
            cout << result[i];
    }

    cout << endl;
    return 0;
}
