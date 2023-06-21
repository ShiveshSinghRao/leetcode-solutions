class Solution {
public:

    string reverseWords(string t) 
    {
        string str;
        vector<string>v;
        for(int i=0;i<t.size();i++)
        {
            if(t[i]!=' ')
            {
                str.push_back(t[i]);
            }
            else
            {
                if(str.size()==0 && t[i]==' ')
                {
                    continue;
                }
                v.push_back(str);
                str="";
            }
        }
        if(str!="")
        {

        v.push_back(str);
        }
        str="";
        stack<string>st;
        //reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
           st.push(v[i]);
        }
        while(st.size()>0)
        {
            if(st.top()==" " && str.size()==0)
            {
                st.pop();
                continue;
            }
            str+=st.top();
            st.pop();
            str+=' ';
        }
        str.pop_back();
        
        return str;
    }
};