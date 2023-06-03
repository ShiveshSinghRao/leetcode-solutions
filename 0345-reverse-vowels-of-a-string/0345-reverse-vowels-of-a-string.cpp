class Solution {
public:
    string reverseVowels(string s) {
        set<char>st{'a','e','i','o','u','A','E','I','O','U'};
        string t;
        for(int i =0;i<s.size();i++)
        {
           if(st.find(s[i]) != st.end() )
            {
                t.push_back(s[i]);
            }
        }
        int k =t.size()-1;
      //  cout<<t;
        for(int i =0;i<s.size();i++)
        {
           if(st.find(s[i]) != st.end() )
            {
                s[i]=t[k];
                k--;
            }
        }
        return s;
    }
};