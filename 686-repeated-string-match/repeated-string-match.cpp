class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string str = a;
        int cnt = 1;

        while (str.size() < b.size()) {
            str += a;
            cnt++;
        }

        if (str.find(b) != string::npos)
            return cnt;

        str += a;
        cnt++;

        if (str.find(b) != string::npos)
            return cnt;

        return -1;
    }
};