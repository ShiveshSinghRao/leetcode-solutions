class Solution {
public:
    int longestSubarray(vector<int>& nums) {
         int counter =0;
        int start = 0;
        int ans =0;
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                counter++;
            }
            while(counter>1)
            {
                if(nums[start]==0)
                {
                    counter--;
                }
                start++;
            }
            int len = i-start;
            ans= max(len,ans);
        }
        return ans;
    }
};