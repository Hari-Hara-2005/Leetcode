class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int n = arr.size();
        int m = arr[0].size();
        for (int i = 0; i < n; i++) {
            int low = 0;
            int high = m - 1;
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (arr[i][mid] == target)
                    return true;
                else if (arr[i][mid] > target) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
        }
        return false;
    }
};