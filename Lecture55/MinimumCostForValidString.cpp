#include<iostream>
#include<stack>
using namespace std;

// test cases are for curly braces
int MiniCost(string &s )
{
    if(s.length()%2 == 1)
    {
        return -1; // No cost for an empty string
    }
   stack<char> st; 
   for(int i = 0 ; i< s.length() ;i++)
   {
    char ch = s[i];
        if(ch == '{')
        {
            st.push(ch);
        }
        else{
            if(!st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                st.push(ch);
            }
        }
   }
   // a count for opening brackets
   // b count for closing brackets
   int a = 0 ; int b = 0 ;
   while(!st.empty())
   {
       if(st.top() == '{')
       {
           a++;
       }
       else
       {
           b++;
       }
       st.pop();
   }
   return ((a+1)/2 + (b+1)/2);

}


int main()
{
     string str = "}}}}{{{{";
     cout << MiniCost(str) << endl; 

}