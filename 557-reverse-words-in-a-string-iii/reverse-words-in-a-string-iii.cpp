class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string res = "";
        string word = "";
        for (int i = 0; i < n; i++) {
            if (s[i] != ' ') {
                word += s[i];
            } else {
                reverse(word.begin(), word.end());
                res += word + " ";
                word = "";
            }
        }
        reverse(word.begin(), word.end());
        res += word;
        return res;
    }
};