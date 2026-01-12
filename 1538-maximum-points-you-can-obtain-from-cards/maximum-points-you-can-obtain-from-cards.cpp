class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int lsum = 0, rsum = 0;
        int rightIdx = n - 1;
        int maxi = INT_MIN;
        for (int i = 0; i < k; i++) {
            lsum += cardPoints[i];
            maxi = max(maxi, lsum);
        }
        for (int i = k - 1; i >= 0; i--) {
            lsum = lsum - cardPoints[i];
            rsum += cardPoints[rightIdx];
            rightIdx--;
            maxi = max(maxi, (lsum + rsum));
        }
        return maxi;
    }
};