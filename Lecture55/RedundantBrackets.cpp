#include<iostream>
#include<stack>
using namespace std ;
bool checkRedundant(string &s)
{
    stack<char> st ;
    for(int  i = 0  ; i< s.length(); i++)
    {
        char  ch = s[i];
        if(ch == '(' || ch == '/' || ch == '-' || ch == '+' || ch == '*' )
        {
            st.push(ch);
        }
        else
        {
            if(ch == ')')
            {
            bool isRedundant = true;    
            while(st.top() != '(')
            {
            
                char top = st.top();

                if(top == '/' || top == '-' || top == '+' || top == '*' )
                {
                    isRedundant = false;
                }
             st.pop(); 

           
            }
              if(isRedundant== true)
             {
                 return true; // Redundant brackets found
             }
             st.pop(); // pop the closing bracket ')'
        }
     }

    }
    return false;

}
int main()
{
      string str = "(a+b*c)";
      if(checkRedundant(str))
      {
          cout << "Redundant brackets found" << endl;
      }
      else
      {
          cout << "No redundant brackets" << endl;
      }
      return 0;
}