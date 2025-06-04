class Solution {
public:
    string makeGood(string s) {
        int n = s.size();
        stack<char>res;
        string ans;
        for (int i = 0; i < n; i++) {
            if(!res.empty() && abs(res.top()-s[i])==32){
                res.pop();
            }
            else{
                res.push(s[i]);
            }
        }
      while(!res.empty())
      {
        ans+=res.top();
        res.pop();
      }
      reverse(ans.begin(),ans.end());
        return ans;
    }
};