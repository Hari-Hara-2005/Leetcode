class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = 0;
        int n = s.size();
        int l = 0, r = 0;
        int maxi = 0;
        vector<int> mp(256, -1);
        while (r < n) {
            if (mp[s[r]] != -1) {
                if(mp[s[r]]>=l)
                l = mp[s[r]] + 1;
            }
            len = r - l+1;
            maxi = max(len, maxi);
            mp[s[r]] = r;
            r++;
        }
        return maxi;
    }
};