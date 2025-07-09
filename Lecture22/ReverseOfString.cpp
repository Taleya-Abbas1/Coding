#include<iostream>
using namespace std;
void reverseArray(char str[],int n)
{
    int start = 0 ;
    int end = n -1 ;
    while(start<=end)
    {
       char temp = str[start];
       str[start] = str[end];
         str[end] = temp;

         start++;
         end--;
    }
}
int getLength(char str[])
{
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}
int main()
{
    char str[100];
    cout << "Enter a string: ";
    cin >> str;
    int n = getLength(str);
    reverseArray(str, n);
    cout << "Reversed string: " << str << endl;
    
}