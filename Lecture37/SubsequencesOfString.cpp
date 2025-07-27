#include<iostream>
#include<vector>
using namespace std;
void solve(string str, string output , int Index,   vector<string>& ans  )
    {
        //base case
        if(Index >= str.size())
        {
            if(output.length() >= 0)
            {
            ans.push_back(output);
            }
            return ;
        }
        //exclude 
        solve(str,output,Index+1,ans);
        //include
        char number = str[Index];
        output.push_back(number);

        solve(str,output,Index+1,ans);
    }
 vector<string> subsets(string str) {
        
        vector<string> ans ;
        string output ;
        int Index = 0 ;
        solve(str ,output ,Index , ans );
        return ans ;
    }

int main()
{
    string str = "abc";
    vector<string> result = subsets(str);

    for (const auto& subsequence : result) {
        cout << subsequence << endl;
    }

    return 0;
}