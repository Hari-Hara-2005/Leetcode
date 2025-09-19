class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        stack<char>st;
        string res="";
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                if(!st.empty())
                {
                    res+=st.top();
                }
                st.push(s[i]);
            }
            else{
                st.pop();
                if(!st.empty())
                {
                res+=s[i];
                }
            }
        }
        return res;
    }
};