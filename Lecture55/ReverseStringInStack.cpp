#include<iostream>
#include<stack>
using namespace std ;
int main()
{
    string str = "Taleya" ;
    stack<char> s;
    // stack mai push kar deya
    for(int i = 0 ; i < str.length();i++)
    {
        char c = str[i];
        s.push(c);
    }
    string ans = " ";
    
   
    while(!s.empty())
    {
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout << " reverse string is :" << ans << endl;  

}