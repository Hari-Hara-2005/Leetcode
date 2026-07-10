class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l = 0, r = 0, len;
        int maxi =0;
        vector<int> mp(256, -1);
        while (r < n) {
            if (mp[s[r]] != -1) {
                if (mp[s[r]] >= l) {
                    l = mp[s[r]] + 1;
                }
            }
            mp[s[r]] = r;
            len = r - l + 1;
            maxi = max(maxi, len);
            r++;
        }
        return maxi;
    }
};