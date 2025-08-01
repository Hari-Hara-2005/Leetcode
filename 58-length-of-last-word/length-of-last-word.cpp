class Solution {
public:
    int lengthOfLastWord(string s) {
        string res ="";
        int cnt =0 ;
        int n = s.size();
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]!=' '){
                cnt++;
                res+=s[i];
            }
            else if(!(res.empty()) && s[i]==' ')
            {
                return cnt;
            }
        }
        return cnt;
    }
};