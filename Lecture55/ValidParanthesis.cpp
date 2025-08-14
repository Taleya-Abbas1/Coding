#include<iostream>
#include<stack>
using namespace std ;
bool validParantheses(stack<char>&st, string expression)
{
  
    // stack mai opening brackets ko rakho 
    for(int i = 0  ; i < expression.size();i++ )
    {
        char ch =expression[i];
        if(ch == '(' || ch == '{' || ch == '[' )
        {
            st.push(ch);
        }
        //agar wo closing hain tu stackTop sy match kro or then pop kro ... jab empty ho jay means valid hai (True return hoga)
        else
        {
            if(!st.empty())
            {
                char top = st.top();
                if((ch == ')' && top == '(' ) || (ch == '}' && top == '{')|| (ch == ']' && top == '['))
                {
                    st.pop();
                }
                else
                {
                    return false ;
                }
            }
            else{
                return false ;
            }
        }
    }

    if(st.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
   
}
int main()
{
    stack<char> st ;
    string expression ;
    cout << "Give any Expression ->" ;
    cin >> expression ;
  
    if(validParantheses(st, expression))
    {
        cout << "Valid Parantheses" << endl;
    }
    else
    {
        cout << "Invalid Parantheses" << endl;
    }
    


}