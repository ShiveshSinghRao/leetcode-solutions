class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int>m;
        for(int i =0;i<s.size();i++){
            m[s[i]]++;
        }
        set<int>st;
        int counter=0;
        for(auto x:m)
        {
            if(st.find(x.second)==st.end())
            {
                st.insert(x.second);
            }
            else
            {
                int t = x.second;
                while(t>0)
                {
                    if(st.find(t)!=st.end())
                    {
                        t--;
                        counter++;
                    }
                    else{
                        st.insert(t);
                        break;
                    }
                }
            }
        }
        return counter;
    }
};