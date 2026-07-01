class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        int m = t.size();
        vector<char>str1(256,0);
        vector<char>str2(256,0);
        if(n != m)return false;
        for(int i=0;i<n;i++)
        {
            if(str1[s[i]] != str2[t[i]])return false;
            str1[s[i]] = i+1;
            str2[t[i]] = i+1;
        }
        return true;
    }
};