class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int>arr1(26);
        vector<int>arr2(26);
        int n=word1.size();
        int m=word2.size();
        if(n!=m)return false;
        for(int i=0;i<n;i++)
        {
            arr1[word1[i]-'a']++;
            arr2[word2[i]-'a']++;
        }
        int cnt=0;
        for(int i=0;i<26;i++)
        {
            if(arr1[i]==0 && arr2[i]==0)continue;
            if(arr1[i]!=0 && arr2[i]!=0)continue;
            return false;
        }
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        if(arr1==arr2)return true;
        return false;
    }
};