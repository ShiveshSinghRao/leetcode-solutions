class Solution {
public:
    int longestOnes(vector<int>& nums, int k) 
    {
        int counter =0;
        int start = 0;
        int ans =0;
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                counter++;
            }
            while(counter>k)
            {
                if(nums[start]==0)
                {
                    counter--;
                }
                start++;
            }
            int len = i-start+1;
            ans= max(len,ans);
        }
        return ans;
           
    }
};