class Solution {
public:
    int pivotInteger(int n) {
        vector<int>ans1(n);
        vector<int>ans2(n);
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            sum+=i;
            ans1[i-1]=sum;
        }
         sum=0;
        for(int i=n;i>=1;i--)
        {
            sum+=i;
            ans2[i-1]=sum;
        }
       
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