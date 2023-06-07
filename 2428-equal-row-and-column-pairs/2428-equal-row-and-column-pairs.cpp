class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
       map<vector<int>,int>mp;
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0;i<n;i++)
        {
            vector<int>t;
            for(int j=0;j<m;j++)
            {
              t.push_back(grid[i][j]);
            }
            mp[t]++;
        }
        int counter=0;
         for(int i=0;i<m;i++)
        {
            vector<int>t;
            for(int j=0;j<n;j++)
            {
              t.push_back(grid[j][i]);
            }
            if(mp.find(t)!=mp.end())
            {
              counter+=mp[t];
            }
        }
        return counter;

    }

};