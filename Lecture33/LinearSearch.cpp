#include<iostream>
using namespace std ;
void printSize(int arr[], int size)
{
    cout << "Size of the array is: " << size << endl;

    for(int i = 0 ; i< size ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
bool LinearSearch(int arr[],int size,int key)
{
    printSize(arr,size);
    //base case
    if(size == 0 )
    {
        return 0 ;
    }

    // recursive call 
    if(arr[0] == key)
    {
        return 1 ;
    }
    else
    {
        return LinearSearch(arr+1,size-1,key);
    }
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    int key;
    cout << "Enter the key to search: ";
    cin >> key;
    int size = 5 ;
    bool result = LinearSearch(arr,size,key);
    if(result)
    {
        cout << "Key found in the array." << endl;
    }
    else
    {
        cout << "Key not found in the array." << endl;
    }
    return 0 ;

}