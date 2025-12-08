class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for (int it : s) {
            mp[it]++;
        }
        multimap<int, char> mmp;
        for (auto it : mp) {
            mmp.insert({-it.second, it.first});
        }
        string res = "";
        for (auto it : mmp) {
            int freq = -it.first;
            char ch = it.second;
            while (freq--) {
                res += ch;
            }
        }
        return res;
    }
};