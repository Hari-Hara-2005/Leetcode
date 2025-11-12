class Solution {
public:

    int findPascal(int row,int col)
    {
        int res = 1;
        for(int i=0;i<col;i++)
        {
            res = res * (row-i);
            res = res/(i+1);
        }
        return res;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=0;i<numRows;i++)
        {
            vector<int>row(i+1);
            for(int j=0;j<=i;j++)
            {
                row[j] = findPascal(i,j); 
            }
            ans.push_back(row);
        }
        return ans;
    }
};