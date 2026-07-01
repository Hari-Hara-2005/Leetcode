class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        sort(strs.begin(), strs.end());
        string str1 = strs[0];
        string str2 = strs[n - 1];
        string res;
        for (int i = 0; i < str1.size(); i++) {
            if (str1[i] == str2[i]) {
                res += str1[i];
            } else {
                return res;
            }
        }
        return res;
    }
};