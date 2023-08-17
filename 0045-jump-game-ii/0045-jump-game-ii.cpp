class Solution {
public: 
    int mini = INT_MAX;
    int check(int ind ,vector<int>&nums,int counter,vector<int>&dp)
    {
        if(counter>nums.size())return 0;
        if(ind>=nums.size()-1)
        {
            return 0;
        }
        if(dp[ind]!=-1)return dp[ind];
        if(nums[ind]==0)return 1e6;
        int ans =1e7;
        for(int i =nums[ind];i>0;i--)
        {
           ans = min(check(ind+i,nums,counter+1,dp),ans);
        }
        return dp[ind]=ans+1;
    }
    int jump(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        if(nums.size()==1)return 0;
        return check(0,nums,0,dp);
        
    }
};