class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        if((num[n-1]-'0') % 2 == 1)return num;
        string res="";
        for(int i=n-1;i>=0;i--)
        {
            if((num[i]-'0') % 2 == 1)
            {
                res+=num[i];
            }
            else if(!res.empty())
            {
                res+=num[i];
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};