class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        int mod = 1e9+7;
         vector<vector<int>>ans;
        int n = nums.size();
        for(int i =0;i<n-3;i++)
        {
            for(int j =i+1;j<n-2;j++)
            {
                int k = j+1;
                int l = n-1;
                while(k<l)
                {
                    int a = (1ll*(nums[i]+nums[j]))%mod;
                    int b = (1ll*(nums[k]+nums[l]))%mod;
                     a = (1ll*(a+b))%mod;
                    if(a==target)
                    {
                        s.insert({nums[i],nums[j],nums[k],nums[l]});
                        k++;
                        l--;
                    }
                    else if(a>target)
                    {
                        l--;
                    }
                    else
                    {
                        k++;
                    }
                }
            }
        }
        for(auto x:s)
        {
            ans.push_back(x);
        }
        return ans;
    }
};