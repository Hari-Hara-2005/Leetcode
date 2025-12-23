class Solution {
public:
    int findMin(vector<int>& arr) {
        int n = arr.size();
        int low = 0;
        int high = n-1;
        int mini = INT_MAX;
        while(low<=high)
        {
            int mid = low + (high - low)/2;
            if(arr[low] <= arr[mid])
            {
                mini = min(arr[low],mini);
                low = mid+1;
            }
            else{
                mini = min(arr[mid],mini);
                high = mid-1;
            }
        }
        return mini;
    }
};