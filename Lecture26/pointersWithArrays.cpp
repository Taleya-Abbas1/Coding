#include<iostream>
using namespace std ;
int main()
{
    int arr[10] = {1,23,3,4,5,6,7,8,9,10};
    cout << "Adress of first memory block ->" << arr << endl;
    cout << arr[0] << endl ;
    //check another way to find adress with '&' operator ...............
     cout << "Adress of first memory block ->" << &arr[0] << endl;
     cout << *arr << endl ;
    cout <<"After incrementer ->"<< *arr + 1<< endl ;

    cout << "Value at second memory block ->" << *(arr + 1) << endl;
    cout << "Address at second memory block ->" << arr + 1 << endl;
    //check value with another way ...............
    cout << "Value at second memory block ->" <<1[arr] << endl;

    // If  i create the pointer to the array ...............
    int *p = arr;
    cout << "Adress of first memory block(After pointing) ->" << p << endl;
    cout << "Value at first memory block(After pointing) ->" << *p << endl;
 

    // -----------1st difference between pointer and array --------------
      //Array --
    //Check size of pointer and array ...............
   cout << "Size of pointer ->" << sizeof(p) << endl;
    cout << "Size of array ->" << sizeof(arr) << endl;
     //Pointer --
   cout << "Size of pointer at *p->" << sizeof(*p) << endl;

   cout << "Adress of pointer ->" << &p << endl;
   
   cout << "Size of Address &p->" << sizeof(&p) << endl;


    // -----------2nd difference between pointer and array --------------


   // Similarity in printing Adressses  .................
   //Array --
   int a[20] = { 90 , 60 , 78 };
   cout << "adress 1st way (a) ->" << a << endl;
   cout << "adress 2nd way (&a[0]) ->" << &a[0] << endl;
    cout << "adress 3rd way (&a) ->" << &a << endl;
   //Pointer --
    int *ptr = &a[0];
    cout << " ptr ->" << ptr << endl;
    cout << " *ptr ->" << *ptr << endl;
    cout << " &ptr ->" << &ptr << endl;
   
    // -----------3rd difference between pointer and array --------------
    //Pointer can be incremented to point to next memory block while array name is fixed , it can not change its mapping in symbol Table  ...............

    // ..Array --
    int arr2[5] = { 1,2,3,4,5 };
     
    // arr2 = arr2 + 1 ; -----> Giving Compile Time Error


    // ..Pointer --
    int *ptr2 = &arr2[0];
    cout <<  " Address of ptr2 before increment ->" << ptr2 << endl;
    ptr2 = ptr2 + 3; // This is valid , pointer can be incremented to point to next memory block
    cout << "Address of ptr2 after increment ->" << ptr2 << endl;
    cout << "arr[3]-->" << arr2[3] << endl;
    cout << "Value at ptr2 after increment ->" << *ptr2 << endl;

}