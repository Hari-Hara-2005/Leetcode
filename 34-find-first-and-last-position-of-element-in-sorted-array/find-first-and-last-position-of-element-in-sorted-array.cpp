class Solution {
public:
    int lowerBound(vector<int> nums, int target, int n) {
        int low = 0;
        int high = n - 1;
        int res = n;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] >= target) {
                res = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return res;
    }
    int upperBound(vector<int> nums, int target, int n) {
        int low = 0;
        int high = n - 1;
        int res = n;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] > target) {
                res = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int st = lowerBound(nums, target, n);
        int ed = upperBound(nums, target, n) - 1;
        if (st == n || nums[st] != target) {
            return {-1, -1};
        }
        return {st, ed};
    }
};