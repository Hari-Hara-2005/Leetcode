class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>ans(26,0);
        int n = s.size();
        int m = t.size();
        if(n!=m)return false;
        for(int i=0;i<n;i++)
        {
            ans[s[i]-'a']++;
        }
        for(int i=0;i<n;i++)
        {
            ans[t[i]-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(ans[i]!=0)return false;
        }
        return true;
    }
};