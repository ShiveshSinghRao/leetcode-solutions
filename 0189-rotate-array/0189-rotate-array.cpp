class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>back;
        int n = nums.size();
        if(n==1)return;
         k=k%nums.size();
        for(int i=0;i<k;i++)
        {
            back.push_back(nums[(n-i-1)]);
        }
        reverse(back.begin(),back.end());
       
        for(int i=0;i<n-k;i++)
        {
            
            back.push_back(nums[i]);
        }
        nums=back;
        
    }
};