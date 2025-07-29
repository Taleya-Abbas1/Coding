#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int> nums,int index, vector<vector<int>>& ans)
{
    // base cas
    if(index >= nums.size())
    {
        ans.push_back(nums);
        return ;
    }

    for(int k = index ; k < nums.size();k++)
    {
        swap(nums[index],nums[k]);
         solve(nums,index+1,ans);
       //backtracking to original after completing one recursion call
        swap(nums[index],nums[k]);
    }
}



vector<vector<int>>  permutation(vector<int>& nums)
{
    vector<vector<int>> ans ;
    int index = 0 ;
    solve(nums,index,ans);
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = permutation(nums);
    
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