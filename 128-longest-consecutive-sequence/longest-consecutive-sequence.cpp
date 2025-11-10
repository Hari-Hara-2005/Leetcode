class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int cnt = 0;
        int maxi = INT_MIN;
        int smallest = INT_MIN;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] - 1 == smallest) {
                cnt++;
                smallest = nums[i];
            } else if (nums[i] != smallest) {
                cnt = 1;
                smallest = nums[i];
            }
            maxi = max(cnt, maxi);
        }
        return (maxi == INT_MIN) ? 0 : maxi;
    }
};