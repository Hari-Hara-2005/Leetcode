class Solution {
public:
    int pivotInteger(int n) {
        vector<int>ans1;
        vector<int>ans2;
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            sum+=i;
            ans1.push_back(sum);
        }
         sum=0;
        for(int i=n;i>=1;i--)
        {
            sum+=i;
            ans2.push_back(sum);
        }
        reverse(ans2.begin(), ans2.end());
        for(int i=0;i<n;i++)
        {
            if(ans1[i]==ans2[i])
            {
                return i+1;
            }
        }
        return -1;
    }
};