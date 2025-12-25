class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        for (auto it : nums1) {
            arr.push_back(it);
        }
        for (auto it : nums2) {
            arr.push_back(it);
        }
        sort(arr.begin(), arr.end());
        int total = arr.size();
        int mid = total / 2;
        if (total % 2 == 0) {
            return (arr[mid - 1] + arr[mid]) / 2.0;
        } else {
            return arr[mid];
        }
    }
};