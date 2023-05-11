class Solution {
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int dp[nums1.size()+1][nums2.size()+1];
       //memset(dp,-1,sizeof(dp));
        int n = nums1.size();
        int m  = nums2.size();
        for(int i =0;i<n+1;i++)
        {
            for(int j =0;j<m+1;j++)
            {
                if(i== 0 || j==0)
                {
                    dp[i][ j]=0;
                }
                else if(nums1[i-1]==nums2[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
    }
};