class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>s;
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int n = nums.size();
        for(int i =0;i<n-2;i++)
        {
            int j =i+1;
            int k =n-1;
            while(j<k)
            {
                int a=nums[i]+nums[j]+nums[k];
                if(a==0)
                {
                  s.insert({nums[i],nums[j],nums[k]});
                  j++;
                  k--;
                }
                else if(a>0)
                {
                   k--;
                }
                else
                {
                    j++;
                }
            }
        }
        for(auto it :s)ans.push_back(it);
        return ans;
    }
};