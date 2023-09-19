class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
      unordered_map<int,int>h;
        for(int x:nums)
        {
            h[x]++;
        }
        for(auto t:h)
        {
            if(t.second!=1)
            {
                return t.first;
            }
        }
        return 0;
    }
};