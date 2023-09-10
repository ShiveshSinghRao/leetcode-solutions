class Solution {
public:
    int countOrders(int n) {
        int mod= 1e9+7;
        long long res =1;
        if(n==1)return 1;
        for(int i =2;i<=n;i++)
        {
            int spaces = 2*i -1;
            int p = (spaces+1)*spaces;
            p/=2;
            res=((res%mod)*(p%mod))%mod;
        }
        return res%mod;
    }
};