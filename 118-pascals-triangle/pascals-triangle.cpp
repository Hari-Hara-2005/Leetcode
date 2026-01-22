class Solution {
public:
    vector<int> findNcr(int row) {
        int res = 1;
        vector<int> ans;
        ans.push_back(res);
        for (int i = 1; i < row; i++) {
            res = res * (row - i);
            res = res / i;
            ans.push_back(res);
        }
        return ans;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int i = 1; i <= numRows; i++) {
            ans.push_back(findNcr(i));
        }
        return ans;
    }
};