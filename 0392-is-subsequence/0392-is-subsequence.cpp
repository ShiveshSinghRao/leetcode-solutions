class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()==0)return 1;
        int k= s.size()-1;
        for(int i = t.size();i>-1;i--)
        {
            if(t[i]==s[k])
            {
                k--;
            }
            if(k==-1)return 1;
        }
        return 0;
    }
};