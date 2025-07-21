#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 23, 3, 4, 5};
    char ch[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

    cout << "Address of first memory block ->" << arr << endl;
    
    cout << ch << endl;

    // pointer ko dy 

    char *c = &ch[0];
    cout << "Address of first memory block (After pointing) but in char array the string will be printed till null character --->" << c << endl;


    // Agar null na mily char array mai tu kaya hota aa jao bhaiya dekhte hen
     char temp = 'z';
     char *p1  = &temp ;
     cout << "Print temp --->" << p1 << endl ;




}