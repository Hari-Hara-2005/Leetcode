class Solution {
public:
    vector<int> findPascal(int row)
    {
        vector<int>ans;
        long long res = 1;
        ans.push_back(res);
        for(int i=1;i<row;i++)
        {
            res = res * (row-i);
            res = res / i;
            ans.push_back(res);
        }
        return ans;
    }
    vector<int> getRow(int rowIndex) {
        return findPascal(rowIndex+1);
    }
};