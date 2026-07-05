class Solution {
public:
    int maxiElement(vector<int> piles) {
        int maxi = INT_MIN;
        int n = piles.size();
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, piles[i]);
        }
        return maxi;
    }

    long long totalHours(vector<int> piles, int h) {
        int n = piles.size();
        long long res = 0;
        for (int i = 0; i < n; i++) {
            res += (piles[i] + h - 1) / h;
        }
        return res;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = maxiElement(piles);
        int ans = -1;
        int low = 1, high = n;
        while (low <= high) {
            int mid = low + (high-low) / 2;
            long long res = totalHours(piles, mid);
            if (h>=res) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};