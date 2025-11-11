class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            int sum = nums[i];
            for (int j = i + 1; j < n; j++) {
                if (sum == k) {
                    cnt++;
                }
                sum += nums[j];
            }
            if (sum == k) {
                cnt++;
            }
        }
        return cnt;
    }
};