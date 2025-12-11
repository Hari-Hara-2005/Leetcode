class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.size();
        int cnt = 0;
        stack<char> st;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(')
                st.push(s[i]);
            else {
                if (!st.empty() && (s[i] == ')' && st.top() == '('))
                    st.pop();
                else {
                    st.push(s[i]);
                }
            }
        }
        return st.size();
    }
};