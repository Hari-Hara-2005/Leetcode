class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        int maxi = INT_MIN;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                cnt++;
            } else if (s[i] == ')') {
                cnt--;
            }
            maxi = max(cnt, maxi);
        }
        return maxi;
    }
};