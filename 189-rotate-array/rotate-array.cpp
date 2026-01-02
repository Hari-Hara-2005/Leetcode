class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int j = n - 1;
        k = k % n;
        int idx = k;
        vector<int> temp(n);
        while (k--) {
            temp[k] = nums[j--];
        }
        for (int i = 0; i <= j; i++) {
            temp[idx + i] = nums[i];
        }
        nums = temp;
    }
};