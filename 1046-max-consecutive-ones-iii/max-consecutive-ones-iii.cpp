class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0, r = 0, len = 0;
        int zero = 0, maxi = 0;
        while (r < n) {
            if (nums[r] == 0)
                zero++;
            while (zero > k) {
                if (nums[l] == 0)
                    zero--;
                l++;
            }
            len = r - l + 1;
            maxi = max(len, maxi);
            r++;
        }
        return maxi;
    }
};