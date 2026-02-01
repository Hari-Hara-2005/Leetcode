class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                mp[grid[i][j]]++;
            }
        }
        int mis = -1, rep = -1;
        int k = n * n;
        for (int i = 1; i <= k; i++) {
            if (mp[i] == 0)
                mis = i;
            if (mp[i] == 2)
                rep = i;
        }
        return {rep, mis};
    }
};