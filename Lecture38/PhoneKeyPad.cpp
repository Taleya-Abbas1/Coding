#include<iostream>
#include<vector>

using namespace std ;
void solve(string digits,int index , string output ,vector<string>& ans,string mapping[] )
{
        // base case
        if(index >= digits.length())
        {
             ans.push_back(output);
            return ;
        }

        int num = digits[index] - '0' ;
        string value = mapping[num];

        for(int i = 0 ; i< value.length();i++)
        {
              output.push_back(value[i]);

              //recursive call 
              solve( digits,index+1, output,ans,mapping);
              output.pop_back();
        }


}
 vector<string> KeyPad(string digits)
{
    vector<string> ans  ;
    if (digits.length() == 0 )
    {
        return ans ;
    }
    int index = 0 ;
    string mapping[10] = {" "," ","abc","def","ghi","jkl","mno","pqrs","stuv","wxyz"};
    string output ;
    solve( digits,index, output,ans,mapping);

    return ans ;
}
int main()
{
    string str = "23";
    vector<string> result = KeyPad(str);

    for (const auto& subsequence : result) {
        cout << subsequence << endl;
    }

    return 0;
}