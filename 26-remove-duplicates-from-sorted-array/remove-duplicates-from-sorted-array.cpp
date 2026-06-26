class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (ans.empty() || ans.back() != nums[i]) {
                ans.push_back(nums[i]);
            }
        }
        for (int i = 0; i < n; i++) {
            if (i < ans.size()) {
                nums[i] = ans[i];
            } else {
                nums[i] = 0;
            }
        }
        return ans.size();
    }
};