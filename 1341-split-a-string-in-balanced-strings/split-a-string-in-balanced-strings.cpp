class Solution {
public:
    int balancedStringSplit(string s) {
        int x=0;
        int cnt=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='R')x++;
            else if(s[i]=='L')x--;
            if(x==0)cnt++;
        }
        return cnt;
    }
};