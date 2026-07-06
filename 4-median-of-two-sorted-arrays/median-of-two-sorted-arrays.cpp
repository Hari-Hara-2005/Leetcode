class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int i = 0, j = 0;
        vector<int> ans;
        while (i < n && j < m) {
            if (nums1[i] <= nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
            } else {
                ans.push_back(nums2[j]);
                j++;
            }
        }

        while (i < n) {
            ans.push_back(nums1[i]);
            i++;
        }

        while (j < m) {
            ans.push_back(nums2[j]);
            j++;
        }

        int size = ans.size();
        int low = 0, high = size - 1;
        int mid = low + (high - low) / 2;

        if (size % 2 == 1)
            return ans[mid];
        else {
            return (double)(ans[mid] + ans[mid + 1]) / 2;
        }
        return -1;
    }
};