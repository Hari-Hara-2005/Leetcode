class Solution {
public:
    int upperBound (vector<int>& arr, int target){
        int low =0;
        int high = arr.size()-1;
        int ans =arr.size();
        while(low<=high)
        {
            int mid = low+(high-low)/2;
            if(arr[mid]>target)
            {
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
    int lowerBound (vector<int>& arr, int target){
        int low =0;
        int high = arr.size()-1;
        int ans =arr.size();
        while(low<=high)
        {
            int mid = low+(high-low)/2;
            if(arr[mid]>=target)
            {
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
     int first = lowerBound(nums,target);
     int last = upperBound(nums,target)-1;
     if(first == nums.size() || nums[first] != target)return {-1,-1};
     return {first,last};   
    }
};