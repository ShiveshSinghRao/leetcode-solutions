class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        string ans;
        int mini =INT_MAX;
        for(int i=0;i<v.size();i++)
        {
           if(mini>v[i].size())
           {
              mini = v[i].size();
           }
        }
       unordered_map<char,int>m;
       int flag=0;
        for(int i =0;i<mini;i++)
        {
            //char t= v[i][0];
            for(int j =0;j<v.size();j++)
            {
               if(v[j][i]!=v[0][i])
               {
                   flag=1;
               }
               
            }
            if(flag==0)
            {
                ans.push_back(v[0][i]);
            }
            else
            {
                break;
            }
        }
        
        return ans;
    }
};