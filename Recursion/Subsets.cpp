Problem Description : https://leetcode.com/problems/subsets/

Time Complexity :O(2^n)
Space Complexity: O(n)

class Solution {
public:
    
    void solve(vector<int> nums,vector<int> op,vector<vector<int>> &ans){
        if(nums.size() == 0){
            ans.push_back(op);
            return;
        }
        vector<int> op1 = op;
        vector<int> op2 = op;
        op2.push_back(nums[0]);
        nums.erase(nums.begin() + 0);
        solve(nums,op1,ans);
        solve(nums,op2,ans);
        return;
    }
      
    
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>> ans;
        vector<int> op;
        solve(nums,op,ans);
        return ans;
       } 
    
};
