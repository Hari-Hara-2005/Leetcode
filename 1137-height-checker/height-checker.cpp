class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int cnt = 0;
        int n = heights.size();
        vector<int> ans=heights;
        sort(ans.begin(), ans.end());
        for (int j = 0; j < n; j++) {
            if (heights[j] != ans[j]) {
                cnt++;
            }
        }
        return cnt;
    }
};