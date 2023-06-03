class Solution {
public:
    bool increasingTriplet(vector<int>& nums)
     {
        int c1 = INT_MAX;
        int c2 =c1;
        for(auto x:nums)
        {
            if(x<=c1)
            {
                c1=x;
            }
            else if(x<=c2)
            {
                c2=x;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};