class Solution {
public:
    int  check(int target,vector<int>&nums,vector<int>&dp)
    {
        if(target<0)return 0;
        if(target==0)
        {
            return 1;
        }
        if(dp[target]!=-1)return dp[target];
        int ans =0;
        for(int i =0;i<nums.size();i++)
        {
            ans +=check(target-nums[i],nums,dp);
        }
        return dp[target]=ans;

    }
    int combinationSum4(vector<int>& nums, int target) 
    {
        int ans =0;
       vector<int>dp(target+1,-1);
       for(int i =0;i<nums.size();i++)
       {
           ans +=check(target-nums[i],nums,dp);
       }
       return ans;
    }
};