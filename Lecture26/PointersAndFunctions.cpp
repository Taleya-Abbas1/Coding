#include<iostream>
using namespace std;
void PrintAddress(int *ptr)
{
    cout << "Address of the integer: " << ptr << endl;
}
void updatePointer(int *ptr)
{
    // ptr = ptr + 1;
    //  cout << "Inside Function -->"  << ptr << endl ;
    *ptr = *ptr + 1 ;
    cout << "Inside Function -->"  << *ptr << endl ;

}
int main()
{
    int value = 5 ;
    int *ptr = &value; // Pointer to an integer
   // PrintAddress(ptr);

//    cout << "Before -->"  << ptr << endl ;
 cout << "Before -->"  << *ptr << endl ;
   updatePointer(ptr);

//    cout << "After -->"  << ptr << endl ;
   cout << "After -->"  << *ptr << endl ;
    return 0;
}