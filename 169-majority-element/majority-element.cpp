class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int  n = nums.size();
        int cnt=0,canditate=0;
        for(int i=0;i<n;i++)
        {
            if(cnt==0)
            {
                canditate = nums[i];
                cnt=1;
            }
            else if(canditate == nums[i])
            {
                cnt++;
            }
            else{
                cnt--;
            }
        }
        return  canditate;
    }
};