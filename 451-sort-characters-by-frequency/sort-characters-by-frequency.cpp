class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        string res;
        unordered_map<int, int> ump;
        for (int i = 0; i < n; i++) {
            ump[s[i]]++;
        }

        multimap<int, int> mp;
        for (auto it : ump) {
            mp.insert({-it.second, it.first});
        }

        for (auto it : mp) {
            int freq = -it.first;
            char ch = it.second;
            while (freq--) {
                res += ch;
            }
        }
        return res;
    }
};