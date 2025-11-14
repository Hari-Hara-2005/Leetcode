class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n==1)return strs[0];
        string res = "";
        sort(strs.begin(), strs.end());
        string word1 = strs[0];
        string word2 = strs[n - 1];
        for (int i = 0; i < max(word1.size(), word2.size()); i++) {
            if (word1[i] != word2[i]) {
                return res;
            } else {
                res += word1[i];
            }
        }
        return res;
    }
};