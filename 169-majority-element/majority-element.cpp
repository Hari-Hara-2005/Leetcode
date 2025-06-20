class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(auto nums:mp)
        {
            if(nums.second>(n/2))
            {
                return nums.first;
            }
        }
        return -1;
    }
};