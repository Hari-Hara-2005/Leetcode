class Solution {
public:
    int maxi(vector<int>& arr) {
        int res = INT_MIN;
        for (int i = 0; i < arr.size(); i++) {
            res = max(res, arr[i]);
        }
        return res;
    }
    long long getMinHour(vector<int>& arr, int hrs) {
        int n = arr.size();
        long long res = 0;
        for (int i = 0; i < n; i++) {
            res += (arr[i]+hrs-1)/hrs;
        }
        return res;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxipile = maxi(piles);
        int low = 1;
        int high = maxipile;
        int ans = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long res = getMinHour(piles, mid);
            if (res <= h) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};