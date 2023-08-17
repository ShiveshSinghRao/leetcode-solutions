class Solution {
public:
    int ans =0;
   
    void check(int ind,vector<int>&nums,vector<int>&vis)
    {
        if(ans==1)return;
        if(ind<0 or ind>=nums.size())return;
        if(nums[ind]==0)
        {
            ans =1;
            return;
        }
        if(vis[ind]!=-1)return;
        vis[ind]=1;
        check(ind+nums[ind],nums,vis);
        check(ind-nums[ind],nums,vis);
        
    }
    bool canReach(vector<int>& nums, int start) {
         vector<int>vis(nums.size(),-1);
        check(start,nums,vis);
        return ans;
    }
};