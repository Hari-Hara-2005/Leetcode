class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string res = "", word = "";
        for (int i = 0; i < n; i++) {
            if (s[i] != ' ') {
                word += s[i];
            } else {
                if (!word.empty()) {
                    res = word + " " + res;
                    word = "";
                }
            }
        }
        if (!word.empty()) {
            res = word + " " + res;
        }
        if (res.back() == ' ')
            res.pop_back();
        return res;
    }
};