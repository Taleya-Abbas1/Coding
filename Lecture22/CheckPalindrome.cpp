#include<iostream>
using namespace std;
char ToLower(char c)
{
    if(c >= 'a' && c <='z')
    {
      return c;
    }
    else
    {
        return c - 'A' + 'a'; 
    }
}
bool isAlphaNumeric(char c)
{
    return (c >= 'a' && c <= 'z') || 
           (c >= 'A' && c <= 'Z') || 
           (c >= '0' && c <= '9');
}

bool checkPalindrome(char str[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end) {
         if(!isAlphaNumeric(str[start]) || str[start] == ' ') {
            start++;
            continue;
       }
       if(!isAlphaNumeric(str[end])) {
            end--;
            continue;
       }
        
       if(ToLower(str[start]) != ToLower(str[end]))
       {
              return false; 
       }
       start++;
       end--;   
    }
    return true; 
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
    
     cin.getline(str, 100); // Alternative way to read a string with spaces
    int n = getLength(str);
    if (checkPalindrome(str, n)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    
}