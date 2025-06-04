class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>leftarr(n),rightarr(n),ans(n);
        int leftsum=0;
        int rightsum=0;
        for(int i=0;i<n;i++)
        {
            leftarr[i]=leftsum;
            leftsum+=nums[i];
        }
        for(int i=n-1;i>=0;i--)
        {
            rightarr[i]=rightsum;
            rightsum+=nums[i];
        }
        for(int i=0;i<n;i++)
        {
            ans[i]=(abs(leftarr[i]-rightarr[i]));
        }
        return ans;
    }
};