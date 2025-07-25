class Solution {
public:
bool isUpper(char ch){
    if(ch>='A'&&ch<='Z')
    {
        return true;
    }
    return false;
}
    bool detectCapitalUse(string word) {
        int n=word.size();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(isUpper(word[i]))
            {
                cnt++;
            }
        }
        if(cnt==n||cnt==0||(cnt==1 && isUpper(word[0])))
        {
            return true;
        }
        return false;
    }
};