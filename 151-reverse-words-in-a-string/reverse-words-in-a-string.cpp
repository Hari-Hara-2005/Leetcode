class Solution {
public:
    string reverseWords(string s) {
        string res = "";
        int n = s.size();
        string word = "";
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                word += s[i];
            } else {
                if (!word.empty()) {
                    reverse(word.begin(), word.end());
                    res = res + (res.empty() ? "" : " ") + word;
                }
                word = "";
            }
        }
        if (!word.empty()) {
            reverse(word.begin(), word.end());
             res = res + (res.empty() ? "" : " ") + word;
        }
        return res;
    }
};