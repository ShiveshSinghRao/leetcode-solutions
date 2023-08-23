class Solution {
public:
    int getMaximumGenerated(int n) {
        vector<int>dp(109);
        if(n<=1)return n;
        dp[1]=1;
        int x = n/2;
        int maxi =0;
        for(int i =1;2*i<=n;i++)
        {
            
            if((2*i)<=n)
             dp[2*i]=dp[i];
            if((2*i)+1<=n)
             dp[(2*i)+1]=dp[i]+dp[i+1];
            
        maxi = max(maxi, dp[2 * i]);
        if (2 * i + 1 <= n)
            maxi = max(maxi, dp[2 * i + 1]);
    }

    return maxi;
     }
};