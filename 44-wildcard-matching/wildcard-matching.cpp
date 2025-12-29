class Solution {
public:
    bool isMatch(string s, string p) {
        int i = 0, j = 0;
        int n = s.size();
        int m = p.size();
        int stIdx = -1, match = 0;
        while (i < n) {
            if (j < m && s[i] == p[j] || p[j] == '?') {
                i++;
                j++;
            } else if (j < m && p[j] == '*') {
                stIdx = j;
                match = i;
                j++;
            } else if (stIdx != -1) {
                j = stIdx + 1;
                match++;
                i = match;
            } else {
                return false;
            }
        }
        while (j < m && p[j] == '*') {
            j++;
        }
        return j == m;
    }
};