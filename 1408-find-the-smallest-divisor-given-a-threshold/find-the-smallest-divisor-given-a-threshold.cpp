class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = *max_element(nums.begin(),nums.end());
        int low =1;
        int high = n;
        int res =-1;
        while(low<=high)
        {
            int mid = low+(high-low)/2;
            int sum =0;
            for(auto x:nums)
            {
                sum+=ceil((double)x/mid);
            }
        if(sum<=threshold)
            {
                res = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return res;
    }
};