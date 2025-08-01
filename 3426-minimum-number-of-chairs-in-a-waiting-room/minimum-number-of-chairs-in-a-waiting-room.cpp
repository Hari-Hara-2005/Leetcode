class Solution {
public:
    int minimumChairs(string s) {
        int n=s.size();
        int cnt =0;
        int maxi = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='E')
            {
                cnt++;
                maxi= max(cnt,maxi);
            }
            else{
                cnt--;
            }

        }
        return maxi;
    }
};