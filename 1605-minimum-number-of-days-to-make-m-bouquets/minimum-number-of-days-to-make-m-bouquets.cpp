class Solution {
public:
    vector<int> getMini(vector<int> arr) {
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for (int i = 0; i < arr.size(); i++) {
            maxi = max(maxi, arr[i]);
            mini = min(mini, arr[i]);
        }
        return {maxi, mini};
    }
    bool possiable(vector<int> arr, int m, int k, int day) {
        int cnt = 0, nofobro = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            if (arr[i] <= day)
                cnt++;
            else {
                nofobro += cnt / k;
                cnt = 0;
            }
        }
        nofobro += cnt / k;
        if (nofobro >= m)
            return true;
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        vector<int> maxAndMini = getMini(bloomDay);
        int low = maxAndMini[1], high = maxAndMini[0];
        int ans = -1;
        if ((long long)m * k > bloomDay.size())
        return -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (possiable(bloomDay, m, k, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};