class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int prod=1;
        int counter=0;
        int j =0;
        for(int i=0;i<nums.size();i++)
        {
            prod*=nums[i];
            while(prod>=k && j<nums.size() )
            {
                prod/=nums[j];
                j++;
            }
            if(prod<k)
            {
                counter+=i-j+1;
            }
            
        }
        return counter;

    }
};