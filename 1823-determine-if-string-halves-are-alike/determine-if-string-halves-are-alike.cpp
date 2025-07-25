class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.size();
        vector<int> a;
        vector<int> b;
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n / 2; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
                s[i] == 'O' || s[i] == 'U') {
                cnt1++;
            }
            a.push_back(s[i]);
        }
        for (int i = n / 2; i < n; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
                s[i] == 'O' || s[i] == 'U') {
                cnt2++;
            }
            b.push_back(s[i]);
        }
        if(cnt1==cnt2)return true;
        return false;
    }
};