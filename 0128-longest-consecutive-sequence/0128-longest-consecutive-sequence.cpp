class Solution {
public:
    int longestConsecutive(vector<int>& nums)
     {
         int counter =1;
         int maxi =1;
         if(nums.size()<=1)return nums.size();
         if(nums.size()==2)
         {
             if(nums[0]==nums[1])return 1;
             return 2;
         }
         set<int>s;
         vector<int>v;
         for(int i =0;i<nums.size();i++)
         {
             int k =s.size();
             s.insert(nums[i]);
             if(k<s.size())
             {
                 v.push_back(nums[i]);
             }
         }
         sort(v.begin(),v.end());
          if(v.size()<=1)return v.size();
         if(v.size()==2)
         {
             if(v[0]==v[1])return 1;
             return 2;
         }
        
     
         for(int i =0;i<v.size()-1;i++)
         {

             if(v[i]==v[i+1]-1)
             {
                 counter++;
             }
             else if(v[i]<=v[i+1])
             {

                 counter=1;
             }
            maxi = max(maxi,counter);
         }
         return maxi;
    }
};