class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int n = nums.size(), cnt = 0;
        for (int i = 0; i < n; i++) {
            if (mp.find(nums[i]) != mp.end()) {
                if (i - abs(mp[nums[i]]) <= k) {
                    return true;
                }
            }
            mp[nums[i]] = i;
        }
        return false;
    }
};