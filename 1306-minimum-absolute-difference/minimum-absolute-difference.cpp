class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int mini = INT_MAX;
        vector<vector<int>> ans;
        for (int i = 1; i < n; i++) {
            int sum = abs(arr[i - 1] - arr[i]);
            if (sum < mini) {
                mini = sum;
                ans.clear();
            }
            if (sum == mini) {
                ans.push_back({arr[i - 1], arr[i]});
            }
        }
        return ans;
    }
};