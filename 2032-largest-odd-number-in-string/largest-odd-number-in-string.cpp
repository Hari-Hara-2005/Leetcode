class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        string res = "";
        for (int i = n - 1; i >= 0; i--) {
            int x = num[i] - '0';
            if (x % 2 == 1) {
                return num;
            } else {
                num.pop_back();
            }
        }
        return res;
    }
};