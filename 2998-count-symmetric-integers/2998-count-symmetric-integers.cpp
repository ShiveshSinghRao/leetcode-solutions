class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int counter=0;
         if(high==10)return 0;
        if(low<=10)low=10;
       for(int i =low;i<=high;i++)
       {
           string str = to_string(i);
           int sum1=0,sum2=0;
           if((str.size()&1)==1)
           {
               continue;
           }
           for(int j=0;j<str.size()/2;j++)
           {
               sum1+=str[j]-'0';
               sum2+=str[str.size()-1-j]-'0';
           }
           if(sum1==sum2)
           {
              // cout<<str<<endl;
               counter++;
           }
       }
        return counter;
    }
};