class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>&t, vector<int>&v) {
       t.push_back(v);
       sort(t.begin(),t.end());
       vector<vector<int>>m;
       for(int i =0;i<t.size();i++)
       {
           if(m.size()==0 or m.back()[1]<t[i][0] )
           {
              
               m.push_back(t[i]);
           }
           else
           {
               m.back()[1]=max(m.back()[1],t[i][1]);
           }
       }
       return m;
    }
};