class Solution {
public:
    long long minimumReplacement(vector<int>& nums) 
    {
        long long t=1e9,res=0,k;
        for(int i =nums.size()-1;i>=0;i--)
        {
            k=(nums[i]+t-1)/t;
            t=nums[i]/k;
            res+=k-1;
        }
        return res;
    }
};