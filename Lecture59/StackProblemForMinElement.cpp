// for S.C -> O(1)
// T.C -> O(1)
#include<iostream>
#include<stack>
#include<limits.h>
using namespace std;
class SpecialStack
{
    public:
   stack<int> s;
   int mini = INT_MAX;

   void push(int data)
   {
    // for first element
    if(s.empty())
    {
        s.push(data);
        mini = data ;
    }
    // for remaining elements
    else
    {
          if(data < mini)
          {
           
            s.push(2  *data - mini);
            mini = data;
          }
          else
          {
            s.push(data);
          }
    } 

   }
    int pop()
    {
        if(s.empty())
        {
            return -1; // or throw an exception
        }
        else
        {
            int curr = s.top();
            s.pop();
             if(curr> mini)
             {
                return curr;
             }
             else
             {
                int prevMini = mini ;
                int val = 2* mini - curr ;
                mini = val ;
                return prevMini;
             }

        }
    }

    int top()
    {
        if(s.empty())
        {
            return -1 ;
        }
        else
        {
         int curr = s.top();
         if(curr<mini)
         {
            return mini ;
         }
         else
         {
            return curr;
         }
        }
    }
    bool isEmpty()
    {
        return s.empty();
    }
    int getMin()
    {
        if(s.empty())
        {
            return -1; // or throw an exception
        }
        else
        {
            return mini;
        }
    }
};
int main()
{
   SpecialStack st;
   st.push(10);
   st.push(20);
   st.push(5);
   cout << "Minimum element: " << st.getMin() << endl;
   cout << "Top element: " << st.top() << endl;
   st.pop();
   cout << "Minimum element after pop: " << st.getMin() << endl;
   return 0;
}