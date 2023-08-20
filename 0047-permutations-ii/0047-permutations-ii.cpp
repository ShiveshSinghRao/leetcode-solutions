class Solution {
public:set<vector<int>>ans;
    void check(int ind,vector<int>&nums)
    { 
        
        if(ind==nums.size())
        {
            ans.insert(nums);
            return ;
            
        }
       for(int i= ind;i<nums.size();i++)
       {
           swap(nums[ind],nums[i]);
           check(ind+1,nums);
           swap(nums[ind],nums[i]);
       }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums)
     {
         //int fq[nums.size()]={0};
         check(0,nums);
          vector<vector<int>>s;
          for(auto x:ans)
          {
              s.push_back(x);
          }
        return s;
    }
};