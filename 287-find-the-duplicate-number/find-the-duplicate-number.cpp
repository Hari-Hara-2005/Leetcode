class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(auto num:mp)
        {
            if(num.second>=2)
            {
                return num.first;
            }
        }
        return -1;
    }
};