class Solution {
public:
    int ans=0;
    int check(int ind,vector<int>&nums,vector<int>& dp)
    {
      
        if(ind>=nums.size()-1)
        {
            //ans=1;
            return 1 ;
        }
        if(dp[ind]!=-1)return dp[ind];
        //if(nums[ind]==0)return;
        for(int i =nums[ind];i>0;i--)
        {
           dp[ind]= check(i+ind,nums,dp);
           if(dp[ind]==1)break;
        }   

        return dp[ind]==1?dp[ind]:0;

    }
    bool canJump(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return check(0,nums,dp);
        
    }
};