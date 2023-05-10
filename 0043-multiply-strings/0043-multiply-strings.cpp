class Solution {
public:
    string multiply(string num1, string num2) {
        vector<int>ans(num1.size()+num2.size(),0);
        int n = num1.size();
        int m =num2.size();
        if(num1=="0" || num2=="0")return "0";
        for(int i =n-1;i>-1;i--)
        {
            for(int j=m-1;j>-1;j--)
            {
                ans[i+j+1] += (num1[i]-'0')*(num2[j]-'0');
                ans[i+j]+=ans[i+j+1]/10;
                ans[i+j+1]%=10;
            }
        }
        string t;
        for(auto x:ans)
        {
            t.push_back('0'+x);
        }
        string v;
        int flag=1;
        for(int i=0;i<t.size();i++)
        {
            if(t[i]=='0'&& flag)
            {
                continue;
            }
            else
            {
                flag=0;
                v.push_back(t[i]);
            }
        }
        return v;
    }
};