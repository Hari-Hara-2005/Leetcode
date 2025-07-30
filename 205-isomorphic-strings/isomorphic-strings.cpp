class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        int m = t.size();
        vector<int> ans1(256, -1);
        vector<int> ans2(256, -1);
        if (n != m)
            return false;
        for (int i = 0; i < n; i++) {
           char ch1=s[i];
           char ch2 = t[i];
           if(ans1[ch1]==-1 && ans2[ch2]==-1)
           {
            ans1[ch1]=ch2;
            ans2[ch2]=ch1;
           }
           else if((ans1[ch1]!=ch2) && (ans2[ch2]!=ch1))
           {
            return false;
           }
        }
        return true;
    }
};