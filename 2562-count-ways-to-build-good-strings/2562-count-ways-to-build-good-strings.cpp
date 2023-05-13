class Solution {
public:

    int check(int amt,vector<int>&dp,vector<int>&v)
    {
        if(amt<0)return 0;
        if(amt==0)
        {
            return 1;
        }
        int mod=1e9+7;
        if(dp[amt]!=-1)return dp[amt];
        
        int ans =0;
        for(int i =0;i<2;i++)
        {
            ans =(ans+check(amt-v[i],dp,v))%mod;
        }
        dp[amt]=ans;
        return dp[amt];
    }
    int countGoodStrings(int low, int high, int zero, int one) 
    {
        vector<int>v;
        v.push_back(zero);
        v.push_back(one);
        
        vector<int>dp(high+1,-1);
        int ans =0;
        int mod=1e9+7;
        for(int i =low;i<high+1;i++)
        {
            for(int j=0;j<2;j++)
            {
                ans=(ans+check(i-v[j],dp,v))%mod;
            }
            cout<<ans<<endl;
        }
        return ans;
         
         
    }
};