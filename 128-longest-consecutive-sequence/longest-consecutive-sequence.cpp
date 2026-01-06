class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int cnt = 0;
        int n = arr.size();
        int maxi = 0;
        int mini = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (arr[i] - 1 == mini) {
                mini = arr[i];
                cnt++;
            } else if (mini != arr[i]) {
                cnt = 1;
                mini = arr[i];
            }
            maxi = max(cnt, maxi);
        }
        return maxi;
    }
};