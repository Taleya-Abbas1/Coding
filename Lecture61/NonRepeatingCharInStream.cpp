#include<iostream>
#include<unordered_map>
#include<queue> 
using namespace std;
string checkNonRepeating(string str)
{
    unordered_map<char,int> count ;
    queue<int> q ;
    string ans = "" ;
    for(int i = 0 ; i < str.length() ; i++ )
    {

         char ch = str[i] ;
         // count of current character 
          count[ch]++ ;
          // push it into queue
          q.push(ch);

          while(!q.empty())
          {
            if(count[q.front()] > 1)
            {  
               //  repeating character
                q.pop();
             
            }
            else
            {
                // non-repeating character
                ans.push_back(q.front());
                break ;
            }
          }
           if(q.empty())
    {
        ans.push_back('#');
    }
  }
   
   
  return ans ; 
      
}
int main()
{
   string str = "aabc";
   cout << "Non-repeating characters in the stream: ";
   cout << checkNonRepeating(str);
   return 0;
}

