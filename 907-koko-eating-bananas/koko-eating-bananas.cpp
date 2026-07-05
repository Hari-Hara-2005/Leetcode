class Solution {
public:
    long long totalHour(vector<int> piles, int h) {
        long long ans = 0;
        int n = piles.size();
        for (int i = 0; i < n; i++) {
            ans += (piles[i] + h - 1) / h;
        }
        return ans;
    }
    int maxiElement(vector<int> piles) {
        int maxi = INT_MIN;
        int n = piles.size();
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, piles[i]);
        }
        return maxi;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long res;
        int high = maxiElement(piles);
        int low = 1, ans = INT_MAX;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            res = totalHour(piles, mid);
            if (h >= res) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};