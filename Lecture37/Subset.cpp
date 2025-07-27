#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int> nums, vector<int> output , int Index, vector<vector<int>>& ans )
    {
        //base case
        if(Index >= nums.size())
        {
            ans.push_back(output);
            return ;
        }
        //exclude 
        solve(nums,output,Index+1,ans);
        //include
        int number = nums[Index];
        output.push_back(number);

        solve(nums,output,Index+1,ans);
    }
 vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int> > ans ;
        vector<int> output ;
        int Index = 0 ;
        solve(nums ,output ,Index , ans );
        return ans ;
    }
int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = subsets(nums);
    
    for (const auto& subset : result) 
    { // result is a vector of vectors and subset is a vector , we iterate through subsets through result 
        //const means we are not changing the subset vector and auto means c++ will automatically deduce the type of subset
        cout << "{ ";
        for (int num = 0 ; num < subset.size(); num++)
     {
            cout << subset[num] << " ";
        }
        cout << "}" << endl;
    }
    
    return 0;

}