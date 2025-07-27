class Solution {
public:
    bool freq(string ch){
        vector<int>ans(26);
        for(int i=0;i<ch.size();i++)
        {
            ans[ch[i]-'a']++;
            if(ans[ch[i]-'a']>1)
            {
                return true;
            }
        }
        return false;
    }
    bool buddyStrings(string s, string goal) {
        int n = s.size();
        int m = goal.size();
        if(n!=m)return false;
        if(s==goal)return freq(s);
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=goal[i])
            {
                ans.push_back(i);
            }
        }
        if(ans.size()!=2)
        {
            return false;
        }
        swap(s[ans[0]],s[ans[1]]);
        if(s==goal)
        {
            return true;
        }
        return false;
    }
};