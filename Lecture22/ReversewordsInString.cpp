#include<iostream>
using namespace std;    
void ReverseWordInstring(char str[])
{
    int start = 0;
    int end = 0;
    
    // Process each character until end of string
    while(str[end] != '\0')
    {
        // Find the end of current word
        while(str[end] != ' ' && str[end] != '\0')
        {
            end++;
        }
        
        // Reverse the current word
        int endWord = end - 1;
        while(start < endWord)
        {
            swap(str[start], str[endWord]);
            start++;
            endWord--;
        }
        
        // Skip spaces and move to next word
        while(str[end] == ' ')
        {
            end++;
        }
        start = end;
    }
    // Reverse the entire string
    end = 0;
    while(str[end] != '\0')
    {
        end++;
    }
    end--; // Move to last character

    start = 0;
    while(start < end)  
    {
        swap(str[start], str[end]);
        start++;
        end--;
    }

}
int main()
{
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100); // Alternative way to read a string with spaces
    ReverseWordInstring(str);
    cout << "Reversed string: " << str << endl;
    return 0;
}