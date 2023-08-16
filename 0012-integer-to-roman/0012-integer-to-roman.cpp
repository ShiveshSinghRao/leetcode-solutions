class Solution {
public:
    string intToRoman(int num) {
        vector<string>ones{"","I","II","III","IV","V","VI","VII","VIII","IX"};
        vector<string>tens{"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        vector<string>huns{"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        vector<string>thous{"","M","MM","MMM"};
        string ans;
        ans+=(thous[num/1000]);
        ans+=(huns[((num%1000))/100]);
        ans+=(tens[(num%100)/10]);
        ans+=(ones[num%10]);
        return ans;
    }
};