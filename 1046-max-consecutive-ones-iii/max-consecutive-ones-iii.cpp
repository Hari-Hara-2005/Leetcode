class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi = 0;
        int l = 0, r = 0;
        int len, zero = 0;
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