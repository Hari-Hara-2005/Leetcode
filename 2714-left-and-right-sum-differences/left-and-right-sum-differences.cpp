class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> RightSum(n, 0);
        vector<int> LeftSum;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            LeftSum.push_back(cnt);
            cnt += nums[i];
        }
        cnt = 0;
        for (int j = n - 1; j >= 0; j--) {
            RightSum[j] = cnt;
            cnt += nums[j];
        }
        vector<int> ans;
        for (int k = 0; k < n; k++) {
            ans.push_back(abs(LeftSum[k] - RightSum[k]));
        }
        return ans;
    }
};