class Solution {
public:
    int getMaximum(vector<int>freq)
    {
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i=0;i<26;i++)
        {
            maxi=max(freq[i],maxi);
            if(freq[i]!=0)mini=min(freq[i],mini);
        }
        if(maxi==INT_MIN || mini==INT_MAX)return 0;
        return (maxi-mini);
    }
    int beautySum(string s) {
        int n = s.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            vector<int>freq(26,0);
            for(int j=i;j<n;j++)
            {
                freq[s[j]-'a']++;
                sum+=getMaximum(freq);
            }
        }
        return sum;
    }
};