class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt=0;
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                ans.push_back(nums[i]);
            }
            else{
                cnt++;
            }
        }
        for(int i=0;i<cnt;i++)
        {
            ans.push_back(0);
        }
        nums=ans;
    }
};