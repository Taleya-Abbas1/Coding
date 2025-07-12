#include<iostream>
#include<string>
using namespace std;
string RemoveAdjacentDuplicates(string s)
{ 
    string result = "";
    for(char ch : s)
    {
        if(!result.empty() && result.back() == ch)
        {
           result.pop_back(); 
        }
        else
        {
            
            result.push_back(ch);
        }
    }
}


int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input); // Read a string with spaces
    string  result =RemoveAdjacentDuplicates(input);
    cout << "String after removing duplicates: " << result << endl;
    return 0;
}