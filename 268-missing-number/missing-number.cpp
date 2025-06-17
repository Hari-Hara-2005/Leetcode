class Solution {
public:
    int missingNumber(vector<int>& nums) {
     int n=nums.size();
     int tot=n*(n+1)/2;
     int cnt=0;
     for(int i=0;i<n;i++)
     {
        cnt+=nums[i];
     }
     return (tot-cnt);
    }
};