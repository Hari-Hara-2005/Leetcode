class Solution {
public:
    int num(char ch) {
        if (ch == 'I')
            return 1;
        else if (ch == 'V')
            return 5;
        else if (ch == 'X')
            return 10;
        else if (ch == 'L')
            return 50;
        else if (ch == 'C')
            return 100;
        else if (ch == 'D')
            return 500;
        else if (ch == 'M')
            return 1000;
        else
            return -1;
    }
    int romanToInt(string s) {
        int res = 0;
        int n = s.size();
        for (int i = 0; i < n - 1; i++) {
            int n1 = num(s[i]);
            int n2 = num(s[i + 1]);
            if (n1 < n2) {
                res -= n1;
            } else {
                res += n1;
            }
        }
        res += num(s[n - 1]);
        return res;
    }
};