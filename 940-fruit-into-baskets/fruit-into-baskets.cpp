class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int l = 0, r = 0, maxi = 0, len;
        unordered_map<int, int> mp;
        while (r < n) {
            mp[fruits[r]]++;
            if (mp.size() > 2) {
                mp[fruits[l]]--;
                if (mp[fruits[l]] == 0)
                    mp.erase(fruits[l]);
                l++;
            } else {
                len = r - l + 1;
                maxi = max(maxi, len);
            }
            r++;
        }
        return maxi;
    }
};