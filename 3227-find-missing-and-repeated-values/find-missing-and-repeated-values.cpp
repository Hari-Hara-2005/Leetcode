class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        int mis = -1, rep = -1;
        map<int, int> mp;
        int n = grid.size(), m = grid[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                mp[grid[i][j]]++;
            }
        }

        for (int i = 1; i <= n * n; i++) {
            if (mp[i] == 2) {
                rep = i;
            }
            if (mp[i] == 0) {
                mis = i;
            }
        }
        return {rep, mis};
    }
};