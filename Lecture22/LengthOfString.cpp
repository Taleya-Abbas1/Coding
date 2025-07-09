#include<iostream>
using namespace std;
void getLength(char str[])
{
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    cout << "Length of the string is: " << length << endl;
}
int main()
{
    char str[100];
    cout << "Enter a string: ";
    cin >> str;
    getLength(str);
}