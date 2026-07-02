class Solution {
public:
    int getMaxi(vector<int> freq) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for (int i = 0; i < 26; i++) {
            maxi = max(maxi, freq[i]);
            if (freq[i] != 0) {
                mini = min(mini, freq[i]);
            }
        }
        if (maxi == INT_MIN || mini == INT_MAX) {
            return 0;
        }
        return (maxi - mini);
    }

    int beautySum(string s) {
        int n = s.size();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            vector<int> freq(26, 0);
            for (int j = i; j < n; j++) {
                freq[s[j] - 'a']++;
                sum += getMaxi(freq);
            }
        }
        return sum;
    }
};