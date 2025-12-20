class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int i = 0;
        string res = "";
        while (i < n) {
            if (isalnum(s[i])) {
                res+=tolower(s[i]);
            }
            i++;
        }
        int size = res.size();
        for (int i = 0; i < size / 2; i++) {
            if (res[i] != res[size - i - 1]) {
                return false;
            }
        }
        return true;
    }
};