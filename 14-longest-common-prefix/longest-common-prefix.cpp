class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n = strs.size();
        string word1 = strs[0];
        string word2 = strs[n-1];
        string res = "";
        for(int i=0;i<min(word1.size(),word2.size());i++)
        {
            if(word1[i]!=word2[i])return  res;
            res+=word1[i];
        }
        return strs[0];
    }
};