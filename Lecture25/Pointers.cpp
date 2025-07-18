#include<iostream>
using namespace std;
int main()
{
    int num = 5 ;
    cout << "num :" << num << endl;
   

    // address operator
    cout << "Address of num :" << &num << endl;

    //Bad practice: using a pointer without initialization
    int *ptr ; // uninitialized pointer poiting to garbage value
    // pointer to num
    cout << "value of Address to which ptr is pointing :" << *ptr << endl;
    int *ptr2 = &num; // pointer initialized to the address of num
    cout << "Address of ptr2 :" << ptr2 << endl;
    
    // sum + 1 to num 
   (*ptr2)++ ;
    //num will be 6 
    cout<< " value of num incremented by the pointer :" <<  num <<endl;

    //Agar defrencing operator na use karte to kya hota
    cout << "Value of num without dereferencing pointer :" << ptr2 << endl;

    // we can check the size of pointer and num
    cout << "Size of num :" << sizeof(num) << endl;
    cout << "Size of ptr2 :" << sizeof(*ptr2) << endl;


    //if we doo int *p = 0 ; it will give segmentation fault 
    // it is pointing to null address
   


    //2 ways to access
    /*int i = 5 ;
    
    int *p = 0 ;
    *p = i ;
    */
    // above 2 lines are same as int *p = &i;


    //Scope of value access
    int num2= 5 ;
    int a = num2;
    a++ ;
    cout << "Value of num after incrementing a :" << num2 << endl; // num remains 5
    cout << "Value of a after incrementing :" << a << endl; // a becomes
    int *p1 = &a ;
    cout << "Value of a using pointer p1 :" << *p1 << endl; // a is accessed through pointer
}