class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int l = 0, r = 0, maxleng, maxfreq, maxi = 0;
        vector<int> mp(26, 0);
        while (r < n) {
            mp[s[r] - 'A']++;
            maxfreq = max(maxfreq, mp[s[r] - 'A']);
            maxleng = r - l + 1 - maxfreq;
            if (maxleng <= k) {
                maxi = max(maxi, r - l + 1);
            } else {
                while ((r - l + 1 - maxfreq) > k) {
                    mp[s[l] - 'A']--;
                    maxfreq = 0;
                    for (int i = 0; i < 26; i++) {
                        maxfreq = max(maxfreq, mp[i]);
                    }
                    l++;
                }
            }
            r++;
        }
        return maxi;
    }
};