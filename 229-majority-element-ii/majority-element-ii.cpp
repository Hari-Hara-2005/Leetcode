class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }
        vector<int> ans;
        for (auto nums : mp) {
            if (nums.second > n / 3) {
                ans.push_back(nums.first);
            }
        }
        return ans;
    }
};