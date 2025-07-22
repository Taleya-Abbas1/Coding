#include<iostream>
using namespace std;
int main()
{
    int i = 5 ;
    int* ptr = &i; // Pointer to i
    int** ptr2 = &ptr; // Pointer to pointer to i

    cout << "Printing ptr :" << ptr << endl;
    cout << "Printing Address of ptr  :" << &ptr << endl;
    cout << "Printing value at  ptr :" << *ptr << endl;

    cout << "Printing ptr2 :" << ptr2 << endl;
    cout << "Printing Address of ptr2 :" << &ptr2 << endl;
    cout << "Printing value at ptr2 :" << *ptr2 << endl;



    cout << "Printing value at value of i :" << i<< endl;
  
    cout << "Printing value at value of ptr2 using ptr :" << *ptr << endl   ;

      cout << "Printing value at value of ptr2 :" << **ptr2 << endl;


      cout << &i << endl;
      cout << ptr << endl;
        cout << *ptr2 << endl;


        cout << &ptr<< endl ;
        cout << ptr2 << endl;
}