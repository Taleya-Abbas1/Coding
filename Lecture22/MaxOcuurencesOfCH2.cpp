#include<iostream>
using namespace std;
char maxOcurrences(string str)
{
    int arr[26] = {0};
    int number ;
    for(int i =0 ; i < str.length();i++)
    {
        char ch = str[i];
        number = ch - 'a';
        arr[number]++;
    }
    int maxi = -1 ;
   int  ans  ;
    for(int i=0; i<26;i++)
    {
        if(arr[i] > maxi)
        {
            maxi = arr[i];
            ans = i;
        }
    }
   int  finalans=  ans + 'a';
}
int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    
    char result = maxOcurrences(input);
    
    cout << "The character with the maximum occurrences is: " << result << endl;
    
    return 0;
}