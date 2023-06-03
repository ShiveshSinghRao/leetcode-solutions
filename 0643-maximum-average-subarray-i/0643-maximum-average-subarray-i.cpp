class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        int i =0;
        int j =0;
        int sum =0;
        int maxi =INT_MIN;
        int mini = INT_MAX;
        int n = nums.size();
        while(j<n)
        {
             sum+=nums[j];
            if(j-i+1<k)
            {
                 j++;
            }
            else if(j-i+1==k)
            {
                maxi = max(maxi,sum);
                mini = min(mini ,sum);
             
                sum-=nums[i];
                i++;
                j++;
            }
           

        }
        return (double)maxi/k;
      
    }
};