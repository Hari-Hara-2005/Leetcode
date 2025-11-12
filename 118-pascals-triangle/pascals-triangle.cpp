class Solution {
public:
    vector<int> findPascal(int row)
    {
        vector<int>ans;
        int res=1;
        ans.push_back(res);
        for(int i=1;i<row;i++)
        {
            res = res * (row-i);
            res = res / i;
            ans.push_back(res);
        }
        return ans;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=0;i<numRows;i++)
        {
            ans.push_back(findPascal(i+1));
        }
        return ans;
    }
};