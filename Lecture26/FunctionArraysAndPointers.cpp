#include<iostream>
using namespace std;
// we can write parameter as int arr[] or int *arr there is no difference in both cases
int getSum(int arr[], int size)
{
    cout << endl << "Size  -- > " <<sizeof(arr) << endl; // This will not give the expected size of the array
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += arr[i]; // Using pointer arithmetic to access array elements
    }
    return sum;
}

int main()
{
    int arr[6] = {1,2,3,4,5,6};
    
    cout << "Sum is -- >" << getSum(arr+3, 3) << endl;    
    // Note: The size of the array is passed as a separate parameter because when an array is passed to a function, it decays to a pointer.
    //Benefit: This allows us to pass a sub-array
    
}