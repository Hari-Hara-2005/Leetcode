class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if (n == 1)
            return nums[0];
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++) {
            int mul = 1;
            for (int j = i; j < n; j++) {
                mul *= nums[j];
                maxi = max(maxi, mul);
            }
        }
        return maxi;
    }
};