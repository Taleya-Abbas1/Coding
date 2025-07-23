#include<iostream>
using namespace std;
int main()
{
    // Example of Adreess Type Casting in C++


    int x = 66;
    void* p = &x ; //void pointer mai int ka  address store kiya
    // we want k ham eska ascii dy tu hamy esy char k pointer mai cast karna hoga char typecast kar k 
    char* p1 = (char*)p; // typecasting void pointer to char pointer
    //dereferencing to get ascii value
    cout << *p1 << endl;

   

    // --- use case ---
    //1.. defrencing void pointer directly is not possible we need to do address typecast it to the appropriate type before dereferencing
     int i = 10 ;
    void* p2 = &i; // void pointer holding address of int
    // dereferencing void pointer directly will give error
    // cout << *p2 << endl; // this will give error because void pointer cannot be dereferenced directly
    cout << *(int*)p2 << endl; // typecasting void pointer to int pointer

    //2. Pointer Type changing(dangerous) Like float ko int mai cast karna
    // This is dangerous because it can lead to misinterpretation of data
    float pi = 3.14;
    int* iptr = (int*)&pi;

    cout << *iptr<< endl ; // Garbage value (interpreting float bits as int)


    //3.Casting in Arrays 
    int num = 1025;    // takes 2 bytes in memory 
     char* byte = (char*)&num; // har byte ka data read kry ga instead of int --> 4 bytes

    cout << (int)*byte << endl;      // Lower byte
    cout << (int)*(byte + 1) << endl; // Higher byte (on little-endian)
    cout << (int)*(byte + 2) << endl; // Undefined behavior (out of bounds)
    cout << (int)*(byte + 3) << endl; // Undefined behavior (out of bounds)

    // Example of Address Type Casting in Arrays
    // Here we are casting an array of integers to a char pointer to read each byte
   
    int arr[3] = {1025, 500, 300};
    char* ptr = (char*)arr;

    for (int i = 0; i < 12; i++) {
        cout << "Byte " << i << ": " << (int)*(ptr + i) << endl;
    }

   



}
