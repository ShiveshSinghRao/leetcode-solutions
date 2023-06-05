class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi =0,sum=0;
        for(auto x:gain)
        {
            sum+=x;
            maxi = max(sum,maxi);
        }
        return maxi;
    }
    
};