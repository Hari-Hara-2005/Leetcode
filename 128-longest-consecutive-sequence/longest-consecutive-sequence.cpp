class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int n=nums.size();
    int cnt=1;
    int smallest=INT_MIN,maxi=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]-1 == smallest)
        {
            cnt++;
            smallest=nums[i];
        }
        else if(nums[i]!=smallest)
        {
            cnt=1;
            smallest=nums[i];
        }
        maxi=max(maxi,cnt);
    }
    return maxi;
    }
};