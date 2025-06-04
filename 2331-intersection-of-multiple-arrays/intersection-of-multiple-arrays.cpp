class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int, int> mp;
        vector<int> ans;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < nums[i].size(); j++) {
                mp[nums[i][j]]++;
            }
        }
        for (auto num : mp) {
            if (num.second == n) {
                ans.push_back(num.first);
            }
        }
        return ans;
    }
};