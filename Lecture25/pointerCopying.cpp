#include<iostream>
using namespace std;
int main()
{
    int num = 5;
    cout << "before increment :" << num << endl;
    int *ptr = &num ;
    (*ptr)++;
    cout << "after increment :" << num << endl;

    //copying pointer
    int *ptr2 = ptr; // ptr2 now points to the same address as ptr

    cout << "Addresses :  ptr : " << ptr <<" -  ptr2 : " << ptr2 << endl;
       cout << "Values : ptr : " << *ptr <<" -  ptr2 : " << *ptr2 << endl;

       //pointer arithmetic
       int w = 7 ;
       int *t  = &w;
       *t = *t + 1 ;
       cout << "Value of w after pointer arithmetic : " << w << endl;
       // if addres ko kr dein tu
         cout << "Address of w(Before) : " << &w << endl;
         t = t + 1; // this will move the pointer to the next integer address
         cout << "Address of t after pointer arithmetic (After): " << t << endl; // this will show the next address
}