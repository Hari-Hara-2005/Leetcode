class Solution {
public:
    int balancedStringSplit(string s) {
        int leftSum=0;
        int rightSum=0;
        int n=s.size();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='R')
            {
                rightSum++;
            }
            else{
                leftSum++;
            }
            if(rightSum==leftSum)cnt++;
        }
        return cnt;
    }
};