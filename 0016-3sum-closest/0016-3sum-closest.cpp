class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans =INT_MAX;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int u;
        for(int i =0;i<n-1;i++)
        {
            int j = i+1;
            int k = n-1;
            while(j<k)
            {
                int a = nums[i]+nums[j]+nums[k];
               
                int y= abs(target-a);
                if(y<ans)
                {
                    ans= abs(target-a);
                    u = a;
                }
                
                if(a>target)
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
        }
        return u;
    }
};