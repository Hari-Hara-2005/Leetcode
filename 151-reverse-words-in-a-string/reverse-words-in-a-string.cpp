class Solution {
public:
    string reverseWords(string s) {
        int n = s.size() - 1;
        string word = "";
        string res = "";
        for (int i = n; i >= 0; i--) {
            if (s[i] != ' ') {
                word += s[i];
            } else if (!word.empty()) {
                reverse(word.begin(), word.end());
                if (!res.empty()) {
                    res += " ";
                }
                res += word;
                word = "";
            }
        }
        if (!word.empty()) {
            reverse(word.begin(), word.end());
            if (!res.empty()) {
                res += " ";
            }
            res += word;
        }
        return res;
    }
};