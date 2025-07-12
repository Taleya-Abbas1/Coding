#include<iostream>
#include<string>
using namespace std;    
string ReaplaceSpaces(string str)
{
    string temp ="";
    for(int i = 0 ; i < str.length();i++)
    {
        if(str[i]== ' ')
        {
           // temp += '@'; // Append '@' for spacea
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            //temp +=str[i];
            temp.push_back(str[i]);
        }
    }
    return temp;
}
int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // Read a string with spaces
    string result = ReaplaceSpaces(str);
    cout << "Replaced string: " << result << endl;
    return 0;
}