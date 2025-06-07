class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ans;
        int preSum=0;
        for(int i=1;i<=n-1;i++)
        {
            preSum+=i;
            ans.push_back(i);
        }
        ans.push_back(-preSum);
        return ans;
    }
};