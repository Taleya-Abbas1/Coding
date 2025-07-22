#include<iostream>
using namespace std;
void update(int** ptr)
{
    // No change
    //ptr = ptr +1 ;

 // yes hoga change
  // *ptr = *ptr + 1;

    **ptr = **ptr + 1;
}
int main()
{
    int i = 5;
    int* ptr = &i;
    int** ptr2 = &ptr;
   cout << "Before -->" << i << endl;
    cout << "Before -->" << ptr  << endl;
     cout << "Before -->" << ptr2 << endl;
   
    update(ptr2);
    cout << "After -->" << i << endl;
    cout << "After -->" << ptr  << endl;
    cout << "After -->" << ptr2 << endl;

   

    return 0;
}