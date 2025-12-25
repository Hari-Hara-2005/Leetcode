class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int cnt = 0;
        int n = nums1.size();
        int m = nums2.size();
        int i = 0, j = 0, mid, indel1 = 0, indel2 = 0;
        int total = n + m;
        int idx1 = total / 2;
        int idx2 = idx1 - 1;
        while (i < n && j < m) {
            if (nums1[i] <= nums2[j]) {
                if (cnt == idx1)
                    indel1 = nums1[i];
                if (cnt == idx2)
                    indel2 = nums1[i];
                i++;
            } else {
                if (cnt == idx1)
                    indel1 = nums2[j];
                if (cnt == idx2)
                    indel2 = nums2[j];
                j++;
            }
            cnt++;
        }
        while (i < n) {
            if (cnt == idx1)
                indel1 = nums1[i];
            if (cnt == idx2)
                indel2 = nums1[i];
            cnt++;
            i++;
        }
        while (j < m) {
            if (cnt == idx1)
                indel1 = nums2[j];
            if (cnt == idx2)
                indel2 = nums2[j];
            cnt++;
            j++;
        }
        if (total % 2 == 0) {
            return (indel1 + indel2) / 2.00;
        } else {
            return indel1;
        }
    }
};