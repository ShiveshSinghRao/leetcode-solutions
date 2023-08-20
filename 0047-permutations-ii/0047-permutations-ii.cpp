class Solution {
public:set<vector<int>>ans;
       vector<vector<int>>s;
    void check(int ind,vector<int>&nums)
    { 
        
        if(ind==nums.size())
        {  int k= ans.size();
            ans.insert(nums);
            if(k!=ans.size())
            {
                s.push_back(nums);
            }
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
          
          
        return s;
    }
};