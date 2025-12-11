class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        int i = 0;
        bool sign = false;
        long long res = 0;
        while (i < n && s[i] == ' ')
            i++;
        if (i<n && (s[i] == '-' || s[i] == '+')) {
            if(s[i]=='-')
            sign = true;
            i++;
        }
        while (i < n && isdigit(s[i])) {
            res = res * 10 + (s[i] - '0');
            if (sign && (res*-1)<= INT_MIN)
                return INT_MIN;
            if (!sign && res >= INT_MAX)
                return INT_MAX;
            i++;
        }
        return sign ? (-1 * res) : res;
    }
};