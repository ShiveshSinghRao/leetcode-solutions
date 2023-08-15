class Solution {
public:
    int myAtoi(string s) {
        int counter =0;
        int f=0;
        string str;
         int sign =1;
         int flag=0;
         int t=0;

        for(int i =0;i<s.size();i++)
        {
            if(s[i]==' ' && t==0)
            {
                continue;
            }
            else if(s[i]=='+' or s[i]=='-')
            {
                if(s[i]=='+')sign*=1;
                else
                {
                    sign*=-1;
                }
                if(flag)return 0;
                counter++;
                if(counter>1)return 0;
            }
            else if(s[i]<'0' or s[i]>'9')
            {
                break;
            }
            else
            {
               while(s[i]>='0' && s[i]<='9')
                {
                    str.push_back(s[i]);
                    i++;
                }
                break;
            }
            t=1;
        }
        double tot=0;
        for(int i =0;i<str.size();i++)
        {
            
            tot+= (str[i]-48)*pow(10,str.size()-i-1);
        }
         tot*=sign;

    
        if(tot > INT_MAX) 
            tot = INT_MAX;

        if(tot < INT_MIN) 
            tot = INT_MIN;
        return (int)tot;
    }
};