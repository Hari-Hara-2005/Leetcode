class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n=word1.size();
        int m=word2.size();
        string res1="";
        for(int i=0;i<n;i++)
        {
            res1+=word1[i];
        }
        string res2="";
        for(int i=0;i<m;i++)
        {
            res2+=word2[i];
        }
        if(res1==res2)
        {
            return true;
        }
        return false;
    }
};