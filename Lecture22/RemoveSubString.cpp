#include<iostream>
using namespace std;
string RemoveSubString(string str , string subStr)
{
    while(str.length() != 0 && str.find(subStr)<str.length())
    {
        int index = str.find(subStr);
        str.erase(index, subStr.length());
    }
    return str;
}
int main()
{
    string str, subStr;
    cout << "Enter the main string: ";
    getline(cin, str); // Read a string with spaces
    cout << "Enter the substring to remove: ";
    getline(cin, subStr); // Read a substring with spaces
    string result = RemoveSubString(str, subStr);
    cout << "Resulting string: " << result << endl;
    return 0;
}