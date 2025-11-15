class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        vector<int> ans(26, 0);
        for (int i = 0; i < n; i++) {
            ans[s[i] - 'a']++;
        }
        for (int i = 0; i < m; i++) {
            ans[t[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++) {
            if (ans[i] != 0)
                return false;
        }
        return true;
    }
};