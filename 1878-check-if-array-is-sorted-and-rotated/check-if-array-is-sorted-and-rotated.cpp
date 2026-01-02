class Solution {
public:
    bool check(vector<int>& arr) {
        int cnt = 0;
        int n = arr.size();
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                cnt++;
                if (cnt > 1)
                    return false;
            }
        }
        if (arr[0] < arr[n - 1]) {
            cnt++;
            if (cnt > 1)
                return false;
        }
        return true;
    }
};