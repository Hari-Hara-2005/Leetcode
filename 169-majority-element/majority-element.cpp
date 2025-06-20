class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int  n=nums.size();
        int cnt=0,candiate=0;
        for(int i=0;i<n;i++)
        {
            if(cnt==0)
            {
                candiate=nums[i];
            }
            if(candiate==nums[i])
            {
                cnt++;
            }
            else{
                cnt--;
            }
        }
        return candiate;
    }
};